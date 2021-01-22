cmake_minimum_required(VERSION 3.16)
project(N2End)

set(CMAKE_CXX_STANDARD 14)

add_executable(N2End src/main.cpp src/model/ModelEngine.cpp src/model/ModelEngine.h src/model/Message.cpp src/model/Message.h src/model/Contact.cpp src/model/Contact.h src/model/fileParse.cpp src/model/fileParse.h src/View/TermWin.cpp src/View/TermWin.h src/ControllerEngine.cpp src/ControllerEngine.h)
set(CMAKE_CXX_FLAGS "-lncurses -lpthread")
target_link_libraries(${PROJECT_NAME} ncurses pthread)
