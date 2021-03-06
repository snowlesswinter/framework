// Copyright (c) 2011 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef VIEWS_CONTROLS_TABBED_PANE_TABBED_PANE_LISTENER_H_
#define VIEWS_CONTROLS_TABBED_PANE_TABBED_PANE_LISTENER_H_
#pragma once

namespace views {

// An interface implemented by an object to let it know that a tabbed pane was
// selected by the user at the specified index.
class TabbedPaneListener {
 public:
  // Called when the tab at |index| is selected by the user.
  virtual void TabSelectedAt(int index) = 0;

 protected:
  virtual ~TabbedPaneListener() {}
};

}  // namespace views

#endif  // VIEWS_CONTROLS_TABBED_PANE_TABBED_PANE_LISTENER_H_
