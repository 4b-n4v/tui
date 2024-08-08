#include "helperfunctions.cpp"
#include <fstream>
#include <ftxui/component/captured_mouse.hpp>
#include <ftxui/component/component.hpp>
#include <ftxui/component/component_options.hpp>
#include <ftxui/component/screen_interactive.hpp>
#include <functional>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char **argv)
{
    if (argc != 1)
    {
        std::cout << argv[0] << "takes no arguments.\n";
        return 1;
    }
    using namespace ftxui;
    auto screen = ScreenInteractive::TerminalOutput();
    std::vector<std::string>
        entries =
            {
                "󰍹  Extend144",
                "󰍹󰟴 Extend-TV"};

    int selected = 0;

    MenuOption option;
    option.on_enter = screen.ExitLoopClosure();
    auto menu = Menu(&entries, &selected, option);
    screen.Loop(menu);
    if (selected == 0)
        extend144();
    else if (selected == 1)
        extend_tv();

    return 0;
}

void extend144()
{
}
