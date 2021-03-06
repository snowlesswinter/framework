// Copyright (c) 2011 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "ui/aura/desktop.h"
#include "ui/aura/toplevel_window_container.h"
#include "ui/aura/window.h"
#include "ui/aura_shell/desktop_layout_manager.h"
#include "ui/aura_shell/launcher/launcher_model.h"
#include "ui/aura_shell/shell.h"
#include "ui/aura_shell/shell_factory.h"
#include "ui/aura_shell/shell_window_ids.h"
#include "views/widget/widget.h"

namespace aura_shell {

// Creates each of the special window containers that holds windows of various
// types in the shell UI. They are added to |containers| from back to front in
// the z-index.
void CreateSpecialContainers(aura::Window::Windows* containers) {
  aura::Window* background_container = new aura::Window(NULL);
  background_container->set_id(
      internal::kShellWindowId_DesktopBackgroundContainer);
  containers->push_back(background_container);

  aura::Window* default_container = new aura::ToplevelWindowContainer;
  default_container->set_id(internal::kShellWindowId_DefaultContainer);
  containers->push_back(default_container);

  aura::Window* always_on_top_container = new aura::ToplevelWindowContainer;
  always_on_top_container->set_id(
      internal::kShellWindowId_AlwaysOnTopContainer);
  containers->push_back(always_on_top_container);

  aura::Window* launcher_container = new aura::Window(NULL);
  launcher_container->set_id(internal::kShellWindowId_LauncherContainer);
  containers->push_back(launcher_container);

  aura::Window* lock_container = new aura::Window(NULL);
  lock_container->set_stops_event_propagation(true);
  lock_container->set_id(internal::kShellWindowId_LockScreenContainer);
  containers->push_back(lock_container);

  aura::Window* status_container = new aura::Window(NULL);
  status_container->set_id(internal::kShellWindowId_StatusContainer);
  containers->push_back(status_container);
}

void InitDesktopWindow() {
  aura::Window::Windows containers;
  CreateSpecialContainers(&containers);
  aura::Window::Windows::const_iterator i;
  for (i = containers.begin(); i != containers.end(); ++i) {
    (*i)->Init();
    aura::Desktop::GetInstance()->window()->AddChild(*i);
    (*i)->Show();
  }

  aura::Window* root_window = aura::Desktop::GetInstance()->window();
  internal::DesktopLayoutManager* desktop_layout =
      new internal::DesktopLayoutManager(root_window);
  root_window->SetLayoutManager(desktop_layout);

  Shell* shell = Shell::GetInstance();
  views::Widget* desktop_background = internal::CreateDesktopBackground();
  shell->GetContainer(
      internal::kShellWindowId_DesktopBackgroundContainer)->AddChild(
          desktop_background->GetNativeView());

  // TODO: this leaks.
  views::Widget* launcher = internal::CreateLauncher(new LauncherModel);
  shell->GetContainer(internal::kShellWindowId_LauncherContainer)->AddChild(
          launcher->GetNativeView());

  views::Widget* status_area = internal::CreateStatusArea();
  shell->GetContainer(internal::kShellWindowId_StatusContainer)->AddChild(
          status_area->GetNativeView());

  desktop_layout->set_background_widget(desktop_background);
  desktop_layout->set_launcher_widget(launcher);
  desktop_layout->set_status_area_widget(status_area);
}

}  // namespace aura_shell

