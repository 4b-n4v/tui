#include "helperfunctions.h"
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
    using namespace ftxui;
    if (argc != 1)
    {
        std::cout << argv[0] << "takes no arguments.\n";
        return 1;
    }
    std::string monitorconf_path = get_monitor_path();
    auto screen = ScreenInteractive::TerminalOutput();
    std::vector<std::string>
        entries =
            {
                "󰍹  Extend-144",
                "󰍹󰟴 Extend-TV"};

    int selected = 0;

    MenuOption option;
    option.on_enter = screen.ExitLoopClosure();
    auto menu = Menu(&entries, &selected, option);
    screen.Loop(menu);

    if (selected == 0)
        extend144(monitorconf_path);
    else if (selected == 1)
        extend_tv(monitorconf_path);

    return 0;
}
