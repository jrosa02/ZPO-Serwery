# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\CLion 2021.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\CLion 2021.3.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\git\ZPO-Serwery

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\git\ZPO-Serwery\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ZPO_Serwery_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ZPO_Serwery_test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ZPO_Serwery_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ZPO_Serwery_test.dir/flags.make

CMakeFiles/ZPO_Serwery_test.dir/src/package.cpp.obj: CMakeFiles/ZPO_Serwery_test.dir/flags.make
CMakeFiles/ZPO_Serwery_test.dir/src/package.cpp.obj: CMakeFiles/ZPO_Serwery_test.dir/includes_CXX.rsp
CMakeFiles/ZPO_Serwery_test.dir/src/package.cpp.obj: ../src/package.cpp
CMakeFiles/ZPO_Serwery_test.dir/src/package.cpp.obj: CMakeFiles/ZPO_Serwery_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\git\ZPO-Serwery\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ZPO_Serwery_test.dir/src/package.cpp.obj"
	"D:\Program Files\CLion 2021.3.3\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ZPO_Serwery_test.dir/src/package.cpp.obj -MF CMakeFiles\ZPO_Serwery_test.dir\src\package.cpp.obj.d -o CMakeFiles\ZPO_Serwery_test.dir\src\package.cpp.obj -c C:\git\ZPO-Serwery\src\package.cpp

CMakeFiles/ZPO_Serwery_test.dir/src/package.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ZPO_Serwery_test.dir/src/package.cpp.i"
	"D:\Program Files\CLion 2021.3.3\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\git\ZPO-Serwery\src\package.cpp > CMakeFiles\ZPO_Serwery_test.dir\src\package.cpp.i

CMakeFiles/ZPO_Serwery_test.dir/src/package.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ZPO_Serwery_test.dir/src/package.cpp.s"
	"D:\Program Files\CLion 2021.3.3\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\git\ZPO-Serwery\src\package.cpp -o CMakeFiles\ZPO_Serwery_test.dir\src\package.cpp.s

CMakeFiles/ZPO_Serwery_test.dir/src/storage_types.cpp.obj: CMakeFiles/ZPO_Serwery_test.dir/flags.make
CMakeFiles/ZPO_Serwery_test.dir/src/storage_types.cpp.obj: CMakeFiles/ZPO_Serwery_test.dir/includes_CXX.rsp
CMakeFiles/ZPO_Serwery_test.dir/src/storage_types.cpp.obj: ../src/storage_types.cpp
CMakeFiles/ZPO_Serwery_test.dir/src/storage_types.cpp.obj: CMakeFiles/ZPO_Serwery_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\git\ZPO-Serwery\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ZPO_Serwery_test.dir/src/storage_types.cpp.obj"
	"D:\Program Files\CLion 2021.3.3\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ZPO_Serwery_test.dir/src/storage_types.cpp.obj -MF CMakeFiles\ZPO_Serwery_test.dir\src\storage_types.cpp.obj.d -o CMakeFiles\ZPO_Serwery_test.dir\src\storage_types.cpp.obj -c C:\git\ZPO-Serwery\src\storage_types.cpp

CMakeFiles/ZPO_Serwery_test.dir/src/storage_types.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ZPO_Serwery_test.dir/src/storage_types.cpp.i"
	"D:\Program Files\CLion 2021.3.3\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\git\ZPO-Serwery\src\storage_types.cpp > CMakeFiles\ZPO_Serwery_test.dir\src\storage_types.cpp.i

CMakeFiles/ZPO_Serwery_test.dir/src/storage_types.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ZPO_Serwery_test.dir/src/storage_types.cpp.s"
	"D:\Program Files\CLion 2021.3.3\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\git\ZPO-Serwery\src\storage_types.cpp -o CMakeFiles\ZPO_Serwery_test.dir\src\storage_types.cpp.s

CMakeFiles/ZPO_Serwery_test.dir/test/test_package.cpp.obj: CMakeFiles/ZPO_Serwery_test.dir/flags.make
CMakeFiles/ZPO_Serwery_test.dir/test/test_package.cpp.obj: CMakeFiles/ZPO_Serwery_test.dir/includes_CXX.rsp
CMakeFiles/ZPO_Serwery_test.dir/test/test_package.cpp.obj: ../test/test_package.cpp
CMakeFiles/ZPO_Serwery_test.dir/test/test_package.cpp.obj: CMakeFiles/ZPO_Serwery_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\git\ZPO-Serwery\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ZPO_Serwery_test.dir/test/test_package.cpp.obj"
	"D:\Program Files\CLion 2021.3.3\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ZPO_Serwery_test.dir/test/test_package.cpp.obj -MF CMakeFiles\ZPO_Serwery_test.dir\test\test_package.cpp.obj.d -o CMakeFiles\ZPO_Serwery_test.dir\test\test_package.cpp.obj -c C:\git\ZPO-Serwery\test\test_package.cpp

CMakeFiles/ZPO_Serwery_test.dir/test/test_package.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ZPO_Serwery_test.dir/test/test_package.cpp.i"
	"D:\Program Files\CLion 2021.3.3\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\git\ZPO-Serwery\test\test_package.cpp > CMakeFiles\ZPO_Serwery_test.dir\test\test_package.cpp.i

CMakeFiles/ZPO_Serwery_test.dir/test/test_package.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ZPO_Serwery_test.dir/test/test_package.cpp.s"
	"D:\Program Files\CLion 2021.3.3\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\git\ZPO-Serwery\test\test_package.cpp -o CMakeFiles\ZPO_Serwery_test.dir\test\test_package.cpp.s

CMakeFiles/ZPO_Serwery_test.dir/test/test_storage_types.cpp.obj: CMakeFiles/ZPO_Serwery_test.dir/flags.make
CMakeFiles/ZPO_Serwery_test.dir/test/test_storage_types.cpp.obj: CMakeFiles/ZPO_Serwery_test.dir/includes_CXX.rsp
CMakeFiles/ZPO_Serwery_test.dir/test/test_storage_types.cpp.obj: ../test/test_storage_types.cpp
CMakeFiles/ZPO_Serwery_test.dir/test/test_storage_types.cpp.obj: CMakeFiles/ZPO_Serwery_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\git\ZPO-Serwery\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ZPO_Serwery_test.dir/test/test_storage_types.cpp.obj"
	"D:\Program Files\CLion 2021.3.3\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ZPO_Serwery_test.dir/test/test_storage_types.cpp.obj -MF CMakeFiles\ZPO_Serwery_test.dir\test\test_storage_types.cpp.obj.d -o CMakeFiles\ZPO_Serwery_test.dir\test\test_storage_types.cpp.obj -c C:\git\ZPO-Serwery\test\test_storage_types.cpp

CMakeFiles/ZPO_Serwery_test.dir/test/test_storage_types.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ZPO_Serwery_test.dir/test/test_storage_types.cpp.i"
	"D:\Program Files\CLion 2021.3.3\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\git\ZPO-Serwery\test\test_storage_types.cpp > CMakeFiles\ZPO_Serwery_test.dir\test\test_storage_types.cpp.i

CMakeFiles/ZPO_Serwery_test.dir/test/test_storage_types.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ZPO_Serwery_test.dir/test/test_storage_types.cpp.s"
	"D:\Program Files\CLion 2021.3.3\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\git\ZPO-Serwery\test\test_storage_types.cpp -o CMakeFiles\ZPO_Serwery_test.dir\test\test_storage_types.cpp.s

CMakeFiles/ZPO_Serwery_test.dir/test/main_gtest.cpp.obj: CMakeFiles/ZPO_Serwery_test.dir/flags.make
CMakeFiles/ZPO_Serwery_test.dir/test/main_gtest.cpp.obj: CMakeFiles/ZPO_Serwery_test.dir/includes_CXX.rsp
CMakeFiles/ZPO_Serwery_test.dir/test/main_gtest.cpp.obj: ../test/main_gtest.cpp
CMakeFiles/ZPO_Serwery_test.dir/test/main_gtest.cpp.obj: CMakeFiles/ZPO_Serwery_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\git\ZPO-Serwery\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ZPO_Serwery_test.dir/test/main_gtest.cpp.obj"
	"D:\Program Files\CLion 2021.3.3\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ZPO_Serwery_test.dir/test/main_gtest.cpp.obj -MF CMakeFiles\ZPO_Serwery_test.dir\test\main_gtest.cpp.obj.d -o CMakeFiles\ZPO_Serwery_test.dir\test\main_gtest.cpp.obj -c C:\git\ZPO-Serwery\test\main_gtest.cpp

CMakeFiles/ZPO_Serwery_test.dir/test/main_gtest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ZPO_Serwery_test.dir/test/main_gtest.cpp.i"
	"D:\Program Files\CLion 2021.3.3\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\git\ZPO-Serwery\test\main_gtest.cpp > CMakeFiles\ZPO_Serwery_test.dir\test\main_gtest.cpp.i

CMakeFiles/ZPO_Serwery_test.dir/test/main_gtest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ZPO_Serwery_test.dir/test/main_gtest.cpp.s"
	"D:\Program Files\CLion 2021.3.3\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\git\ZPO-Serwery\test\main_gtest.cpp -o CMakeFiles\ZPO_Serwery_test.dir\test\main_gtest.cpp.s

# Object files for target ZPO_Serwery_test
ZPO_Serwery_test_OBJECTS = \
"CMakeFiles/ZPO_Serwery_test.dir/src/package.cpp.obj" \
"CMakeFiles/ZPO_Serwery_test.dir/src/storage_types.cpp.obj" \
"CMakeFiles/ZPO_Serwery_test.dir/test/test_package.cpp.obj" \
"CMakeFiles/ZPO_Serwery_test.dir/test/test_storage_types.cpp.obj" \
"CMakeFiles/ZPO_Serwery_test.dir/test/main_gtest.cpp.obj"

# External object files for target ZPO_Serwery_test
ZPO_Serwery_test_EXTERNAL_OBJECTS =

ZPO_Serwery_test.exe: CMakeFiles/ZPO_Serwery_test.dir/src/package.cpp.obj
ZPO_Serwery_test.exe: CMakeFiles/ZPO_Serwery_test.dir/src/storage_types.cpp.obj
ZPO_Serwery_test.exe: CMakeFiles/ZPO_Serwery_test.dir/test/test_package.cpp.obj
ZPO_Serwery_test.exe: CMakeFiles/ZPO_Serwery_test.dir/test/test_storage_types.cpp.obj
ZPO_Serwery_test.exe: CMakeFiles/ZPO_Serwery_test.dir/test/main_gtest.cpp.obj
ZPO_Serwery_test.exe: CMakeFiles/ZPO_Serwery_test.dir/build.make
ZPO_Serwery_test.exe: lib/libgmock.a
ZPO_Serwery_test.exe: lib/libgtest.a
ZPO_Serwery_test.exe: CMakeFiles/ZPO_Serwery_test.dir/linklibs.rsp
ZPO_Serwery_test.exe: CMakeFiles/ZPO_Serwery_test.dir/objects1.rsp
ZPO_Serwery_test.exe: CMakeFiles/ZPO_Serwery_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\git\ZPO-Serwery\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable ZPO_Serwery_test.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ZPO_Serwery_test.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ZPO_Serwery_test.dir/build: ZPO_Serwery_test.exe
.PHONY : CMakeFiles/ZPO_Serwery_test.dir/build

CMakeFiles/ZPO_Serwery_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ZPO_Serwery_test.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ZPO_Serwery_test.dir/clean

CMakeFiles/ZPO_Serwery_test.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\git\ZPO-Serwery C:\git\ZPO-Serwery C:\git\ZPO-Serwery\cmake-build-debug C:\git\ZPO-Serwery\cmake-build-debug C:\git\ZPO-Serwery\cmake-build-debug\CMakeFiles\ZPO_Serwery_test.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ZPO_Serwery_test.dir/depend

