# CMakeLists.txt for Doraemon VisualBox
#
# © 2019 by Xu Dong

cmake_minimum_required(VERSION 3.7)

set(This Doraemon-VisBox)
set(CXX_FLAGS "-Wall")

add_definitions(-std=c++11)


find_package(OpenCV 4.1 REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})
link_directories(${OpenCV_LIBRARY_DIRS})
add_definitions(${OpenCV_DEFINITIONS})


find_package(PCL 1.2 REQUIRED)

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})


#add_executable()
#target_link_libraries()