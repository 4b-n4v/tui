#include <ftxui/component/component.hpp>
#include <ftxui/component/component_base.hpp>
#include <ftxui/component/component_options.hpp>
#include <ftxui/component/screen_interactive.hpp>
#include <ftxui/dom/elements.hpp>
#include <ftxui/dom/node.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/screen.hpp>
#include <iostream>

int main(void)
{
    using namespace ftxui;

    // Element document = hbox({text("Header 1") | flex, separator() | flex, text("Header 2") | flex});
    // document |= border;
    //
    // auto screen = Screen::Create(Dimension::Full(), Dimension::Fit(document));
    // Render(screen, document);
    // screen.Print();
    auto cell = [](const char *t)
    { return text(t) | border; };
    auto document = gridbox({
        {cell("north-west"), cell("north"), cell("north-east")},
        {cell("west"), cell("center"), cell("east")},
        {cell("south-west"), cell("south"), cell("south-east")},
    });
    auto screen = Screen::Create(Dimension::Full(), Dimension::Fit(document));
    Render(screen, document);
    screen.Print();
    return 0;
}

// clang-format off

























































// int main(void)
// {
//     using namespace ftxui;
//
//     Element document =
//         hbox({window(text("n4v"),
//                      hbox(
//                          {text("Thewindow"),
//                           gaugeUp(0.5)}))});
//
//     auto screen = Screen::Create(Dimension::Full(), Dimension::Fit(document));
//     Render(screen, document);
//     screen.Print();
//     return 0;
// }
