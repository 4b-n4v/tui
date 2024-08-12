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
    // Get monitor path from function
    std::string monitorconf_path = get_monitor_path();
    // Define User Interface
    std::vector<std::string>
        entries =
            {
                "󰍹  Extend-144",
                "󰍹󰟴 Extend-TV"};

    int selected = 0;

    auto screen = ScreenInteractive::Fullscreen();
    MenuOption option;
    option.on_enter = screen.ExitLoopClosure();
    // Define border around  menu
    // auto renderer = Renderer(menu, [&]
    //                          { return menu->Render() | border | frame; });
    auto layout = Container::Horizontal({Menu(&entries, &selected, option)});
    screen.Loop(layout);

    if (selected == 0)
        extend144(monitorconf_path);
    else if (selected == 1)
        extend_tv(monitorconf_path);

    return 0;
}
