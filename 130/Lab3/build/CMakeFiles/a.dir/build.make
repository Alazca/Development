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
CMAKE_SOURCE_DIR = /home/alazca/Development/130/Lab3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alazca/Development/130/Lab3/build

# Include any dependencies generated for this target.
include CMakeFiles/a.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/a.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/a.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/a.dir/flags.make

CMakeFiles/a.dir/main.cpp.o: CMakeFiles/a.dir/flags.make
CMakeFiles/a.dir/main.cpp.o: /home/alazca/Development/130/Lab3/main.cpp
CMakeFiles/a.dir/main.cpp.o: CMakeFiles/a.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/alazca/Development/130/Lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/a.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/a.dir/main.cpp.o -MF CMakeFiles/a.dir/main.cpp.o.d -o CMakeFiles/a.dir/main.cpp.o -c /home/alazca/Development/130/Lab3/main.cpp

CMakeFiles/a.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/a.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alazca/Development/130/Lab3/main.cpp > CMakeFiles/a.dir/main.cpp.i

CMakeFiles/a.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/a.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alazca/Development/130/Lab3/main.cpp -o CMakeFiles/a.dir/main.cpp.s

CMakeFiles/a.dir/student.cpp.o: CMakeFiles/a.dir/flags.make
CMakeFiles/a.dir/student.cpp.o: /home/alazca/Development/130/Lab3/student.cpp
CMakeFiles/a.dir/student.cpp.o: CMakeFiles/a.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/alazca/Development/130/Lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/a.dir/student.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/a.dir/student.cpp.o -MF CMakeFiles/a.dir/student.cpp.o.d -o CMakeFiles/a.dir/student.cpp.o -c /home/alazca/Development/130/Lab3/student.cpp

CMakeFiles/a.dir/student.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/a.dir/student.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alazca/Development/130/Lab3/student.cpp > CMakeFiles/a.dir/student.cpp.i

CMakeFiles/a.dir/student.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/a.dir/student.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alazca/Development/130/Lab3/student.cpp -o CMakeFiles/a.dir/student.cpp.s

CMakeFiles/a.dir/studentheap.cpp.o: CMakeFiles/a.dir/flags.make
CMakeFiles/a.dir/studentheap.cpp.o: /home/alazca/Development/130/Lab3/studentheap.cpp
CMakeFiles/a.dir/studentheap.cpp.o: CMakeFiles/a.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/alazca/Development/130/Lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/a.dir/studentheap.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/a.dir/studentheap.cpp.o -MF CMakeFiles/a.dir/studentheap.cpp.o.d -o CMakeFiles/a.dir/studentheap.cpp.o -c /home/alazca/Development/130/Lab3/studentheap.cpp

CMakeFiles/a.dir/studentheap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/a.dir/studentheap.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alazca/Development/130/Lab3/studentheap.cpp > CMakeFiles/a.dir/studentheap.cpp.i

CMakeFiles/a.dir/studentheap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/a.dir/studentheap.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alazca/Development/130/Lab3/studentheap.cpp -o CMakeFiles/a.dir/studentheap.cpp.s

CMakeFiles/a.dir/studentinsertion.cpp.o: CMakeFiles/a.dir/flags.make
CMakeFiles/a.dir/studentinsertion.cpp.o: /home/alazca/Development/130/Lab3/studentinsertion.cpp
CMakeFiles/a.dir/studentinsertion.cpp.o: CMakeFiles/a.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/alazca/Development/130/Lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/a.dir/studentinsertion.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/a.dir/studentinsertion.cpp.o -MF CMakeFiles/a.dir/studentinsertion.cpp.o.d -o CMakeFiles/a.dir/studentinsertion.cpp.o -c /home/alazca/Development/130/Lab3/studentinsertion.cpp

CMakeFiles/a.dir/studentinsertion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/a.dir/studentinsertion.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alazca/Development/130/Lab3/studentinsertion.cpp > CMakeFiles/a.dir/studentinsertion.cpp.i

CMakeFiles/a.dir/studentinsertion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/a.dir/studentinsertion.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alazca/Development/130/Lab3/studentinsertion.cpp -o CMakeFiles/a.dir/studentinsertion.cpp.s

CMakeFiles/a.dir/studentlist.cpp.o: CMakeFiles/a.dir/flags.make
CMakeFiles/a.dir/studentlist.cpp.o: /home/alazca/Development/130/Lab3/studentlist.cpp
CMakeFiles/a.dir/studentlist.cpp.o: CMakeFiles/a.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/alazca/Development/130/Lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/a.dir/studentlist.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/a.dir/studentlist.cpp.o -MF CMakeFiles/a.dir/studentlist.cpp.o.d -o CMakeFiles/a.dir/studentlist.cpp.o -c /home/alazca/Development/130/Lab3/studentlist.cpp

CMakeFiles/a.dir/studentlist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/a.dir/studentlist.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alazca/Development/130/Lab3/studentlist.cpp > CMakeFiles/a.dir/studentlist.cpp.i

CMakeFiles/a.dir/studentlist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/a.dir/studentlist.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alazca/Development/130/Lab3/studentlist.cpp -o CMakeFiles/a.dir/studentlist.cpp.s

CMakeFiles/a.dir/studentquick.cpp.o: CMakeFiles/a.dir/flags.make
CMakeFiles/a.dir/studentquick.cpp.o: /home/alazca/Development/130/Lab3/studentquick.cpp
CMakeFiles/a.dir/studentquick.cpp.o: CMakeFiles/a.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/alazca/Development/130/Lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/a.dir/studentquick.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/a.dir/studentquick.cpp.o -MF CMakeFiles/a.dir/studentquick.cpp.o.d -o CMakeFiles/a.dir/studentquick.cpp.o -c /home/alazca/Development/130/Lab3/studentquick.cpp

CMakeFiles/a.dir/studentquick.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/a.dir/studentquick.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alazca/Development/130/Lab3/studentquick.cpp > CMakeFiles/a.dir/studentquick.cpp.i

CMakeFiles/a.dir/studentquick.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/a.dir/studentquick.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alazca/Development/130/Lab3/studentquick.cpp -o CMakeFiles/a.dir/studentquick.cpp.s

CMakeFiles/a.dir/studentssort.cpp.o: CMakeFiles/a.dir/flags.make
CMakeFiles/a.dir/studentssort.cpp.o: /home/alazca/Development/130/Lab3/studentssort.cpp
CMakeFiles/a.dir/studentssort.cpp.o: CMakeFiles/a.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/alazca/Development/130/Lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/a.dir/studentssort.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/a.dir/studentssort.cpp.o -MF CMakeFiles/a.dir/studentssort.cpp.o.d -o CMakeFiles/a.dir/studentssort.cpp.o -c /home/alazca/Development/130/Lab3/studentssort.cpp

CMakeFiles/a.dir/studentssort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/a.dir/studentssort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alazca/Development/130/Lab3/studentssort.cpp > CMakeFiles/a.dir/studentssort.cpp.i

CMakeFiles/a.dir/studentssort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/a.dir/studentssort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alazca/Development/130/Lab3/studentssort.cpp -o CMakeFiles/a.dir/studentssort.cpp.s

# Object files for target a
a_OBJECTS = \
"CMakeFiles/a.dir/main.cpp.o" \
"CMakeFiles/a.dir/student.cpp.o" \
"CMakeFiles/a.dir/studentheap.cpp.o" \
"CMakeFiles/a.dir/studentinsertion.cpp.o" \
"CMakeFiles/a.dir/studentlist.cpp.o" \
"CMakeFiles/a.dir/studentquick.cpp.o" \
"CMakeFiles/a.dir/studentssort.cpp.o"

# External object files for target a
a_EXTERNAL_OBJECTS =

a : CMakeFiles/a.dir/main.cpp.o
a : CMakeFiles/a.dir/student.cpp.o
a : CMakeFiles/a.dir/studentheap.cpp.o
a : CMakeFiles/a.dir/studentinsertion.cpp.o
a : CMakeFiles/a.dir/studentlist.cpp.o
a : CMakeFiles/a.dir/studentquick.cpp.o
a : CMakeFiles/a.dir/studentssort.cpp.o
a : CMakeFiles/a.dir/build.make
a : CMakeFiles/a.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/alazca/Development/130/Lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable a"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/a.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/a.dir/build: a
.PHONY : CMakeFiles/a.dir/build

CMakeFiles/a.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/a.dir/cmake_clean.cmake
.PHONY : CMakeFiles/a.dir/clean

CMakeFiles/a.dir/depend:
	cd /home/alazca/Development/130/Lab3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alazca/Development/130/Lab3 /home/alazca/Development/130/Lab3 /home/alazca/Development/130/Lab3/build /home/alazca/Development/130/Lab3/build /home/alazca/Development/130/Lab3/build/CMakeFiles/a.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/a.dir/depend

