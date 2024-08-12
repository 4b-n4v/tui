cmake_minimum_required(VERSION 3.11)

include(FetchContent)

# Set the output directory for all configurations
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "$ENV{HOME}/.local/bin")

set(FETCHCONTENT_UPDATES_DISCONNECTED TRUE)
FetchContent_Declare(
  ftxui
  GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui
  GIT_TAG main # Important: Specify a version or a commit hash here.
)
FetchContent_MakeAvailable(ftxui)

project(
  TUI_Display_Manager
  LANGUAGES CXX
  VERSION 1.0.0)
add_executable(display-manager src/main.cpp src/helperfunctions.cpp
                               src/helperfunctions.h)
target_link_libraries(
  display-manager
  PRIVATE ftxui::screen
  PRIVATE ftxui::dom
  PRIVATE ftxui::component # Not needed for this example.
)
