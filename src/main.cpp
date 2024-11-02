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
    std::string monitorconf_path = get_monitor_path();
    if (argc != 1)
    {
        std::string cmd_arg = argv[1];
        if (cmd_arg == "Extend-144")
        {
            extend144(monitorconf_path);
            return 0;
        }
        else if (cmd_arg == "Extend-TV")
        {
            extend_tv(monitorconf_path);
            return 0;
        }
        else
        {
            std::cout << "Invalid argument: " << cmd_arg << std::endl;
            return 1;
        }
    }
    // Get monitor path from function
    // Define User Interface
    std::vector<std::string>
        entries =
            {
                "󰍹  Vertical",
                "󰍹  Extend-144",
                "󰍹󰟴 Extend-TV"};

    int selected = 0;

    auto screen = ScreenInteractive::Fullscreen();
    MenuOption option;
    option.on_enter = screen.ExitLoopClosure();
    auto menu = Menu(&entries, &selected, option);
    // Define border around  menu
    auto renderer = Renderer(menu, [&]
                             { return menu->Render() | border; });
    screen.Loop(renderer);

    if (selected == 0)
        vertical(monitorconf_path);
    else if (selected == 1)
        extend144(monitorconf_path);
    else if (selected == 2)
        extend_tv(monitorconf_path);

    return 0;
}
