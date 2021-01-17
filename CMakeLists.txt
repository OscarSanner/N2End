cmake_minimum_required(VERSION 3.16)
project(N2End)

set(CMAKE_CXX_STANDARD 14)

add_executable(N2End src/main.cpp src/CCWindow.cpp src/CCWindow.h src/fileParse.h src/fileParse.cpp src/ChatRoom.cpp src/ChatRoom.h src/connect.cpp src/connect.h)
set(CMAKE_CXX_FLAGS "-lncurses -lpthread")
target_link_libraries(${PROJECT_NAME} ncurses pthread)
