cmake_minimum_required(VERSION 3.21)
project(lightspeed CXX)

add_library(lightspeed)
target_include_directories(lightspeed PUBLIC include)

target_sources(lightspeed
PRIVATE
    "src/lightspeed.cpp"
PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/include/lightspeed.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/include/surface/surface.h"
)

find_package(Eigen3)
target_link_libraries(lightspeed Eigen3::Eigen)

set_target_properties(lightspeed PROPERTIES PUBLIC_HEADER "include/lightspeed.h")
install(TARGETS lightspeed)