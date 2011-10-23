#ifndef _MY_WIDGET_DELEGATE_H_
#define _MY_WIDGET_DELEGATE_H_
#pragma once

#include <string>

#include "third_party/chromium/base/basictypes.h"
#include "third_party/chromium/base/compiler_specific.h"
#include "third_party/chromium/views/widget/widget_delegate.h"

namespace views
{
class Widget;
class TabbedPane;
class Label;
}

namespace examples
{
class ExampleBase;

class ExamplesMain : public views::WidgetDelegate
{
public:
    ExamplesMain();
    virtual ~ExamplesMain();

    // Overridden from WidgetDelegate:
    virtual bool CanResize() const OVERRIDE;
    virtual bool CanMaximize() const OVERRIDE;
    virtual string16 GetWindowTitle() const OVERRIDE;
    virtual views::View* GetContentsView() OVERRIDE;
    virtual void WindowClosing() OVERRIDE;
    virtual views::Widget* GetWidget() OVERRIDE;
    virtual const views::Widget* GetWidget() const OVERRIDE;

    void Init();

    void SetStatus(const std::string& status);

private:
    void AddExample(ExampleBase* example);

    views::View* contents_;
    views::TabbedPane* tabbedPane_;
    views::Label* statusLabel_;
    std::vector<ExampleBase*> examples_;

    DISALLOW_COPY_AND_ASSIGN(ExamplesMain);
};

}

#endif  // _MY_WIDGET_DELEGATE_H_