// TODO: Probably simplify some functions.
// Merge extend144 and extend-tv into a single function
// and simplify into a simple conditional statement for refresh rate.
// TODO: Add check if open();
#include "helperfunctions.h"

std::string get_monitor_path()
{
    // Get user home directory
    std::string home_directory = std::getenv("HOME");

    // Get full path to monitors config
    std::string full_path_monitor_conf = home_directory + ("/.config/hypr/monitors.conf");
    return full_path_monitor_conf;
}

void vertical(std::string &monitorpath)
{
    const char *config =
        "# +==================================+\n"
        "# |░█▄░▄█░█▀█░█▀█░▀█▀░▀█▀░█▀█░█▀▄░█▀▀|\n"
        "# |░█░█░█░█░█░█░█░░█░░░█░░█░█░█▀▄░▀▀█|\n"
        "# |░▀░ ░▀░▀▀▀░▀░▀░▀▀▀░░▀░░▀▀▀░▀░▀░▀▀▀|\n"
        "# +==================================+\n"
        "monitor=HDMI-A-1,1920x1080@144,0x0,1.0,transform,1\n"
        "monitor=eDP-1,1920x1080@120,-1920x0,1.0\n";
    std::ofstream monitor_config(monitorpath);
    monitor_config << config;
    monitor_config.close();
}

void extend144(std::string &monitorpath)
{
    const char *config =
        "# +==================================+\n"
        "# |░█▄░▄█░█▀█░█▀█░▀█▀░▀█▀░█▀█░█▀▄░█▀▀|\n"
        "# |░█░█░█░█░█░█░█░░█░░░█░░█░█░█▀▄░▀▀█|\n"
        "# |░▀░ ░▀░▀▀▀░▀░▀░▀▀▀░░▀░░▀▀▀░▀░▀░▀▀▀|\n"
        "# +==================================+\n"
        "monitor=HDMI-A-1,1920x1080@144,0x0,1.0\n"
        "monitor=eDP-1,1920x1080@120,-1920x0,1.0\n";
    std::ofstream monitor_config(monitorpath);
    monitor_config << config;
    monitor_config.close();
}

void extend_tv(std::string &monitorpath)
{
    const char *config =
        "# +==================================+\n"
        "# |░█▄░▄█░█▀█░█▀█░▀█▀░▀█▀░█▀█░█▀▄░█▀▀|\n"
        "# |░█░█░█░█░█░█░█░░█░░░█░░█░█░█▀▄░▀▀█|\n"
        "# |░▀░ ░▀░▀▀▀░▀░▀░▀▀▀░░▀░░▀▀▀░▀░▀░▀▀▀|\n"
        "# +==================================+\n"
        "monitor=HDMI-A-1,1920x1080@60,0x0,1.0\n"
        "monitor=eDP-1,1920x1080@120,-1920x0,1.0\n";
    std::ofstream monitor_config(monitorpath);
    monitor_config << config;
    monitor_config.close();
}
