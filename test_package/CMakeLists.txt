cmake_minimum_required(VERSION 3.21)
project(PackageTest CXX)

find_package(lightspeed CONFIG REQUIRED)
find_package(Eigen3)
find_package(Catch2 REQUIRED)

add_executable(example src/example.cpp)
target_link_libraries(example lightspeed::lightspeed Eigen3::Eigen Catch2::Catch2WithMain)

set_property(TARGET example PROPERTY CXX_STANDARD 23)
