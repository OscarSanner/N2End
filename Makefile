# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/Oscar/Documents/GitProjects/N2End

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/Oscar/Documents/GitProjects/N2End

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /mnt/c/Users/Oscar/Documents/GitProjects/N2End/CMakeFiles /mnt/c/Users/Oscar/Documents/GitProjects/N2End/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /mnt/c/Users/Oscar/Documents/GitProjects/N2End/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named N2End

# Build rule for target.
N2End: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 N2End
.PHONY : N2End

# fast build rule for target.
N2End/fast:
	$(MAKE) -f CMakeFiles/N2End.dir/build.make CMakeFiles/N2End.dir/build
.PHONY : N2End/fast

CCWindow.o: CCWindow.cpp.o

.PHONY : CCWindow.o

# target to build an object file
CCWindow.cpp.o:
	$(MAKE) -f CMakeFiles/N2End.dir/build.make CMakeFiles/N2End.dir/CCWindow.cpp.o
.PHONY : CCWindow.cpp.o

CCWindow.i: CCWindow.cpp.i

.PHONY : CCWindow.i

# target to preprocess a source file
CCWindow.cpp.i:
	$(MAKE) -f CMakeFiles/N2End.dir/build.make CMakeFiles/N2End.dir/CCWindow.cpp.i
.PHONY : CCWindow.cpp.i

CCWindow.s: CCWindow.cpp.s

.PHONY : CCWindow.s

# target to generate assembly for a file
CCWindow.cpp.s:
	$(MAKE) -f CMakeFiles/N2End.dir/build.make CMakeFiles/N2End.dir/CCWindow.cpp.s
.PHONY : CCWindow.cpp.s

ChatRoom.o: ChatRoom.cpp.o

.PHONY : ChatRoom.o

# target to build an object file
ChatRoom.cpp.o:
	$(MAKE) -f CMakeFiles/N2End.dir/build.make CMakeFiles/N2End.dir/ChatRoom.cpp.o
.PHONY : ChatRoom.cpp.o

ChatRoom.i: ChatRoom.cpp.i

.PHONY : ChatRoom.i

# target to preprocess a source file
ChatRoom.cpp.i:
	$(MAKE) -f CMakeFiles/N2End.dir/build.make CMakeFiles/N2End.dir/ChatRoom.cpp.i
.PHONY : ChatRoom.cpp.i

ChatRoom.s: ChatRoom.cpp.s

.PHONY : ChatRoom.s

# target to generate assembly for a file
ChatRoom.cpp.s:
	$(MAKE) -f CMakeFiles/N2End.dir/build.make CMakeFiles/N2End.dir/ChatRoom.cpp.s
.PHONY : ChatRoom.cpp.s

connect.o: connect.cpp.o

.PHONY : connect.o

# target to build an object file
connect.cpp.o:
	$(MAKE) -f CMakeFiles/N2End.dir/build.make CMakeFiles/N2End.dir/connect.cpp.o
.PHONY : connect.cpp.o

connect.i: connect.cpp.i

.PHONY : connect.i

# target to preprocess a source file
connect.cpp.i:
	$(MAKE) -f CMakeFiles/N2End.dir/build.make CMakeFiles/N2End.dir/connect.cpp.i
.PHONY : connect.cpp.i

connect.s: connect.cpp.s

.PHONY : connect.s

# target to generate assembly for a file
connect.cpp.s:
	$(MAKE) -f CMakeFiles/N2End.dir/build.make CMakeFiles/N2End.dir/connect.cpp.s
.PHONY : connect.cpp.s

fileParse.o: fileParse.cpp.o

.PHONY : fileParse.o

# target to build an object file
fileParse.cpp.o:
	$(MAKE) -f CMakeFiles/N2End.dir/build.make CMakeFiles/N2End.dir/fileParse.cpp.o
.PHONY : fileParse.cpp.o

fileParse.i: fileParse.cpp.i

.PHONY : fileParse.i

# target to preprocess a source file
fileParse.cpp.i:
	$(MAKE) -f CMakeFiles/N2End.dir/build.make CMakeFiles/N2End.dir/fileParse.cpp.i
.PHONY : fileParse.cpp.i

fileParse.s: fileParse.cpp.s

.PHONY : fileParse.s

# target to generate assembly for a file
fileParse.cpp.s:
	$(MAKE) -f CMakeFiles/N2End.dir/build.make CMakeFiles/N2End.dir/fileParse.cpp.s
.PHONY : fileParse.cpp.s

initWindows.o: initWindows.cpp.o

.PHONY : initWindows.o

# target to build an object file
initWindows.cpp.o:
	$(MAKE) -f CMakeFiles/N2End.dir/build.make CMakeFiles/N2End.dir/initWindows.cpp.o
.PHONY : initWindows.cpp.o

initWindows.i: initWindows.cpp.i

.PHONY : initWindows.i

# target to preprocess a source file
initWindows.cpp.i:
	$(MAKE) -f CMakeFiles/N2End.dir/build.make CMakeFiles/N2End.dir/initWindows.cpp.i
.PHONY : initWindows.cpp.i

initWindows.s: initWindows.cpp.s

.PHONY : initWindows.s

# target to generate assembly for a file
initWindows.cpp.s:
	$(MAKE) -f CMakeFiles/N2End.dir/build.make CMakeFiles/N2End.dir/initWindows.cpp.s
.PHONY : initWindows.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/N2End.dir/build.make CMakeFiles/N2End.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/N2End.dir/build.make CMakeFiles/N2End.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/N2End.dir/build.make CMakeFiles/N2End.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... N2End"
	@echo "... CCWindow.o"
	@echo "... CCWindow.i"
	@echo "... CCWindow.s"
	@echo "... ChatRoom.o"
	@echo "... ChatRoom.i"
	@echo "... ChatRoom.s"
	@echo "... connect.o"
	@echo "... connect.i"
	@echo "... connect.s"
	@echo "... fileParse.o"
	@echo "... fileParse.i"
	@echo "... fileParse.s"
	@echo "... initWindows.o"
	@echo "... initWindows.i"
	@echo "... initWindows.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

