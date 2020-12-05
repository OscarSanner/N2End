cmake_minimum_required(VERSION 3.16)
project(N2End)

set(CMAKE_CXX_STANDARD 14)

add_executable(N2End main.cpp initWindows.cpp initWindows.h CCWindow.cpp CCWindow.h fileParse.h fileParse.cpp ChatRoom.cpp ChatRoom.h connect.cpp connect.h crypt.h crypt.cpp)
set(CMAKE_CXX_FLAGS "-lncurses -lpthread")
target_link_libraries(${PROJECT_NAME} ncurses pthread)
