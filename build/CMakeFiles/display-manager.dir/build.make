# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/n4v/Projects/tui

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/n4v/Projects/tui/build

# Include any dependencies generated for this target.
include CMakeFiles/display-manager.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/display-manager.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/display-manager.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/display-manager.dir/flags.make

CMakeFiles/display-manager.dir/src/main.cpp.o: CMakeFiles/display-manager.dir/flags.make
CMakeFiles/display-manager.dir/src/main.cpp.o: /home/n4v/Projects/tui/src/main.cpp
CMakeFiles/display-manager.dir/src/main.cpp.o: CMakeFiles/display-manager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/n4v/Projects/tui/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/display-manager.dir/src/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/display-manager.dir/src/main.cpp.o -MF CMakeFiles/display-manager.dir/src/main.cpp.o.d -o CMakeFiles/display-manager.dir/src/main.cpp.o -c /home/n4v/Projects/tui/src/main.cpp

CMakeFiles/display-manager.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/display-manager.dir/src/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/n4v/Projects/tui/src/main.cpp > CMakeFiles/display-manager.dir/src/main.cpp.i

CMakeFiles/display-manager.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/display-manager.dir/src/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/n4v/Projects/tui/src/main.cpp -o CMakeFiles/display-manager.dir/src/main.cpp.s

CMakeFiles/display-manager.dir/src/helperfunctions.cpp.o: CMakeFiles/display-manager.dir/flags.make
CMakeFiles/display-manager.dir/src/helperfunctions.cpp.o: /home/n4v/Projects/tui/src/helperfunctions.cpp
CMakeFiles/display-manager.dir/src/helperfunctions.cpp.o: CMakeFiles/display-manager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/n4v/Projects/tui/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/display-manager.dir/src/helperfunctions.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/display-manager.dir/src/helperfunctions.cpp.o -MF CMakeFiles/display-manager.dir/src/helperfunctions.cpp.o.d -o CMakeFiles/display-manager.dir/src/helperfunctions.cpp.o -c /home/n4v/Projects/tui/src/helperfunctions.cpp

CMakeFiles/display-manager.dir/src/helperfunctions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/display-manager.dir/src/helperfunctions.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/n4v/Projects/tui/src/helperfunctions.cpp > CMakeFiles/display-manager.dir/src/helperfunctions.cpp.i

CMakeFiles/display-manager.dir/src/helperfunctions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/display-manager.dir/src/helperfunctions.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/n4v/Projects/tui/src/helperfunctions.cpp -o CMakeFiles/display-manager.dir/src/helperfunctions.cpp.s

# Object files for target display-manager
display__manager_OBJECTS = \
"CMakeFiles/display-manager.dir/src/main.cpp.o" \
"CMakeFiles/display-manager.dir/src/helperfunctions.cpp.o"

# External object files for target display-manager
display__manager_EXTERNAL_OBJECTS =

/home/n4v/.local/bin/display-manager: CMakeFiles/display-manager.dir/src/main.cpp.o
/home/n4v/.local/bin/display-manager: CMakeFiles/display-manager.dir/src/helperfunctions.cpp.o
/home/n4v/.local/bin/display-manager: CMakeFiles/display-manager.dir/build.make
/home/n4v/.local/bin/display-manager: _deps/ftxui-build/libftxui-screen.a
/home/n4v/.local/bin/display-manager: _deps/ftxui-build/libftxui-dom.a
/home/n4v/.local/bin/display-manager: _deps/ftxui-build/libftxui-component.a
/home/n4v/.local/bin/display-manager: _deps/ftxui-build/libftxui-dom.a
/home/n4v/.local/bin/display-manager: _deps/ftxui-build/libftxui-screen.a
/home/n4v/.local/bin/display-manager: CMakeFiles/display-manager.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/n4v/Projects/tui/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable /home/n4v/.local/bin/display-manager"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/display-manager.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/display-manager.dir/build: /home/n4v/.local/bin/display-manager
.PHONY : CMakeFiles/display-manager.dir/build

CMakeFiles/display-manager.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/display-manager.dir/cmake_clean.cmake
.PHONY : CMakeFiles/display-manager.dir/clean

CMakeFiles/display-manager.dir/depend:
	cd /home/n4v/Projects/tui/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/n4v/Projects/tui /home/n4v/Projects/tui /home/n4v/Projects/tui/build /home/n4v/Projects/tui/build /home/n4v/Projects/tui/build/CMakeFiles/display-manager.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/display-manager.dir/depend

