cmake_minimum_required(VERSION 3.16)
project(cChat2)

set(CMAKE_CXX_STANDARD 14)

add_executable(cChat2 main.cpp initWindows.cpp initWindows.h CCWindow.cpp CCWindow.h WindowFiller.cpp WindowFiller.h fileParse.h fileParse.cpp ChatRoom.cpp ChatRoom.h connect.cpp connect.h)
set(CMAKE_CXX_FLAGS "-lncurses -lpthread")
target_link_libraries(${PROJECT_NAME} ncurses pthread)
