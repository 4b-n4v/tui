#include "helperfunctions.h"
#include <filesystem>

void extend144()
{
}

void extend_tv()
{
}

void get_monitor_path()
{
    namespace fs = std::filesystem;

    fs::path p_monitor_conf{""};
    std::string m_path = std::getenv("HOME");
}
