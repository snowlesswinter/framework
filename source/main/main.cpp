#include <memory>

#include <windows.h>

#include "third_party/chromium/base/at_exit.h"
#include "third_party/chromium/base/command_line.h"
#include "third_party/chromium/base/process_util.h"
#include "third_party/chromium/base/i18n/icu_util.h"
#include "third_party/chromium/base/message_loop.h"
#include "third_party/chromium/base/threading/platform_thread.h"
#include "third_party/chromium/base/utf_string_conversions.h"
#include "third_party/chromium/chrome/app/scoped_ole_initializer.h"
#include "third_party/chromium/ui/base/ui_base_paths.h"
#include "third_party/chromium/ui/base/resource/resource_bundle.h"
#include "third_party/chromium/ui/base/clipboard/clipboard.h"
#include "third_party/chromium/views/focus/accelerator_handler.h"
#include "third_party/chromium/views/views_delegate.h"
#include "third_party/chromium/views/widget/widget_delegate.h"
#include "third_party/chromium/views/background.h"
#include "third_party/chromium/views/layout/grid_layout.h"
#include "third_party/chromium/views/controls/tabbed_pane/tabbed_pane.h"
#include "third_party/chromium/views/controls/label.h"
#include "third_party/chromium/views/widget/widget.h"
#include "my_views_delegate.h"
#include "my_widget_delegate.h"
#include "bubble_example.h"
#include "button_example.h"
#include "combobox_example.h"
#include "double_split_view_example.h"
#include "link_example.h"
#include "menu_example.h"
#include "message_box_example.h"
#include "native_theme_button_example.h"
#include "native_theme_checkbox_example.h"
#include "native_widget_views_example.h"
#include "radio_button_example.h"
#include "scroll_view_example.h"
#include "single_split_view_example.h"
#include "tabbed_pane_example.h"
#include "table_example.h"
#include "table2_example.h"
#include "text_example.h"
#include "textfield_example.h"
#include "throbber_example.h"
#include "widget_example.h"

using std::unique_ptr;
using std::string;
using ui::Clipboard;
using views::ViewsDelegate;
using views::View;
using views::Widget;
using views::WidgetDelegate;
using views::Background;
using views::GridLayout;
using views::ColumnSet;
using examples::NativeThemeCheckboxExample;
using examples::NativeThemeButtonExample;
using examples::NativeWidgetViewsExample;
using examples::TextfieldExample;
using examples::ButtonExample;
using examples::TextExample;
using examples::BubbleExample;
using examples::ThrobberExample;
using examples::ComboboxExample;
using examples::LinkExample;
using examples::TabbedPaneExample;
using examples::MessageBoxExample;
using examples::RadioButtonExample;
using examples::ScrollViewExample;
using examples::SingleSplitViewExample;
using examples::DoubleSplitViewExample;
using examples::TableExample;
using examples::Table2Example;
using examples::WidgetExample;
using examples::MenuExample;

MyViewsDelegate::MyViewsDelegate()
    : defaultParentView_(NULL)
{
    assert(!ViewsDelegate::views_delegate);
    ViewsDelegate::views_delegate = this;
}

MyViewsDelegate::~MyViewsDelegate()
{
}

ui::Clipboard* MyViewsDelegate::GetClipboard() const
{
    if (!clipboard_)
        clipboard_.reset(new ui::Clipboard);

    return clipboard_.get();
}

View* MyViewsDelegate::GetDefaultParentView()
{
    return defaultParentView_;
}

bool MyViewsDelegate::GetSavedWindowPlacement(
    const std::string& windowName, gfx::Rect* bounds,
    ui::WindowShowState* showState) const
{
    return false;
}

int MyViewsDelegate::GetDispositionForEvent(int eventFlags)
{
    return 0;
}

//------------------------------------------------------------------------------
namespace examples
{
ExamplesMain::ExamplesMain()
    : contents_(NULL)
    , tabbedPane_(NULL)
    , statusLabel_(NULL)
    , examples_()
{
}

ExamplesMain::~ExamplesMain()
{
}

bool ExamplesMain::CanResize() const
{
    return true;
}

bool ExamplesMain::CanMaximize() const
{
    return true;
}

string16 ExamplesMain::GetWindowTitle() const
{
    return L"Views Examples App";
}

View* ExamplesMain::GetContentsView()
{
    return contents_;
}

void ExamplesMain::WindowClosing()
{
    MessageLoop::current()->Quit();
}

Widget* ExamplesMain::GetWidget()
{
    return contents_->GetWidget();
}

const Widget* ExamplesMain::GetWidget() const
{
    return contents_->GetWidget();
}

void ExamplesMain::Init()
{
    assert(!contents_ && "Run called more than once.");
    contents_ = new View();
    contents_->set_background(Background::CreateStandardPanelBackground());
    GridLayout* layout = new GridLayout(contents_);
    contents_->SetLayoutManager(layout);

    ColumnSet* columnSet = layout->AddColumnSet(0);
    columnSet->AddColumn(GridLayout::FILL, GridLayout::FILL, 1,
                         GridLayout::USE_PREF, 0, 0);

    tabbedPane_ = new views::TabbedPane();
    statusLabel_ = new views::Label();

    layout->StartRow(1, 0);
    layout->AddView(tabbedPane_);
    layout->StartRow(0, 0);
    layout->AddView(statusLabel_);

    Widget* window =
        Widget::CreateWindowWithBounds(this, gfx::Rect(0, 0, 850, 300));

    examples_.push_back(new NativeThemeCheckboxExample(this));
    examples_.push_back(new NativeThemeButtonExample(this));
    examples_.push_back(new NativeWidgetViewsExample(this));
    examples_.push_back(new TextfieldExample(this));
    examples_.push_back(new ButtonExample(this));
    examples_.push_back(new TextExample(this));
    examples_.push_back(new BubbleExample(this));
    examples_.push_back(new ThrobberExample(this));
    examples_.push_back(new ComboboxExample(this));
    examples_.push_back(new LinkExample(this));
    examples_.push_back(new TabbedPaneExample(this));
    examples_.push_back(new MessageBoxExample(this));
    examples_.push_back(new RadioButtonExample(this));
    examples_.push_back(new ScrollViewExample(this));
    examples_.push_back(new SingleSplitViewExample(this));
    examples_.push_back(new DoubleSplitViewExample(this));
    examples_.push_back(new TableExample(this));
    examples_.push_back(new Table2Example(this));
    examples_.push_back(new WidgetExample(this));
    examples_.push_back(new MenuExample(this));

    auto myself = this;
    std::for_each(
        examples_.begin(), examples_.end(),
        [myself](ExampleBase* e){ myself->AddExample(e); });

    window->Show();
}

void ExamplesMain::SetStatus(const string& status)
{
}

void ExamplesMain::AddExample(ExampleBase* example)
{
    tabbedPane_->AddTab(UTF8ToUTF16(example->example_title()),
                        example->example_view());
}
}

//------------------------------------------------------------------------------
int __stdcall wWinMain(HINSTANCE instance, HINSTANCE prevInstance,
                       wchar_t* commandLine, int commandShow)
{
    ScopedOleInitializer oleInit;

    // Initialize the command line singleton from the environment.
    CommandLine::Init(0, NULL);

    base::EnableTerminationOnHeapCorruption();

    // The exit manager is in charge of calling the dtors of singletons.
    base::AtExitManager exitManager;

    ui::RegisterPathProvider();

    const bool icuResult = icu_util::Initialize();
    assert(icuResult);

    ui::ResourceBundle::InitSharedInstance("en-US");

    MessageLoop mainMessageLoop(MessageLoop::TYPE_UI);
    const char* kThreadName = "main thread";
    base::PlatformThread::SetName(kThreadName);
    mainMessageLoop.set_thread_name(kThreadName);

    MyViewsDelegate delegate;

    examples::ExamplesMain main;
    main.Init();

    views::AcceleratorHandler acceleratorHandler;
    MessageLoopForUI::current()->Run(&acceleratorHandler);
    return 0;
}