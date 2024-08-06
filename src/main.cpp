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
        int len_gauge = 50;
        // auto screen = Screen::Create(Dimension::Full(), Dimension::Full());
        //
        //
        // auto &pixel = screen.PixelAt(9, 9);
        // pixel.character = U'A';
        // pixel.bold = true;
        // pixel.foreground_color = Color::Blue;
        //
        // std::cout << screen.ToString();
        auto buttons = Container::Horizontal({
            Button("Increase", [&]
                   { len_gauge++; }, ButtonOption::Animated(Color::RGB(234, 105, 80))),
        });

        Element document = vbox({text("The Window") | bold | color(Color::Blue),
                                 gauge(len_gauge * 0.01f),
                                 text("The Footer")});

        auto component = Renderer(buttons, [&]
                                  { return vbox({text("The The Window") | bold | color(Color::Blue),
                                                 gauge(len_gauge * 0.01f),
                                                 text("The Footer"),
                                                 buttons->Render()}); });
        auto screen = ScreenInteractive::FitComponent();
        screen.Loop(component);
        return 0;
}
