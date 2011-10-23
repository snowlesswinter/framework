#ifndef _MY_VIEWS_DELEGATE_H_
#define _MY_VIEWS_DELEGATE_H_
#pragma once

#include "third_party/chromium/build/build_config.h"
#include "third_party/chromium/base/compiler_specific.h"
#include "third_party/chromium/ui/base/accessibility/accessibility_types.h"
#include "third_party/chromium/views/views_delegate.h"

class MyViewsDelegate : public views::ViewsDelegate
{
public:
    MyViewsDelegate();
    virtual ~MyViewsDelegate();

    // Overridden from ViewsDelegate:
    virtual ui::Clipboard* GetClipboard() const OVERRIDE;
    virtual views::View* GetDefaultParentView() OVERRIDE;
    virtual void SaveWindowPlacement(const views::Widget* window,
        const std::string& windowName,
        const gfx::Rect& bounds,
        ui::WindowShowState showState) OVERRIDE {}
    virtual bool GetSavedWindowPlacement(
        const std::string& windowName, gfx::Rect* bounds,
        ui::WindowShowState* showState) const OVERRIDE;
    virtual void NotifyAccessibilityEvent(
        views::View* view, ui::AccessibilityTypes::Event eventType) OVERRIDE {}
    virtual void NotifyMenuItemFocused(const string16& menuName,
        const string16& menuItemName,
        int itemIndex, int itemCount,
        bool hasSubmenu) OVERRIDE {}
    virtual HICON GetDefaultWindowIcon() const OVERRIDE { return NULL; }
    virtual void AddRef() OVERRIDE {}
    virtual void ReleaseRef() OVERRIDE {}
    virtual int GetDispositionForEvent(int eventFlags) OVERRIDE;

    // Accessor
    void SetDefaultParentView(views::View* v) { defaultParentView_ = v; }

private:
    views::View* defaultParentView_;
    mutable std::unique_ptr<ui::Clipboard> clipboard_;

    DISALLOW_COPY_AND_ASSIGN(MyViewsDelegate);
};

#endif  // _MY_VIEWS_DELEGATE_H_