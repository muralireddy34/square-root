cmake_minimum_required(VERSION 2.8)
project( square-root )
include_directories(C:/Users/MuraliR/Downloads/opencv/build/include)
set (OpenCV_DIR C:/Users/MuraliR/Downloads/opencv/build/include)
add_executable( square-root src/square-root.c )
target_link_libraries( square-root ${OpenCV_LIBS} )
