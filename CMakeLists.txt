cmake_minimum_required(VERSION 3.21)
project(lightspeed CXX)

add_library(lightspeed)
target_include_directories(lightspeed PUBLIC include)

set_property(TARGET lightspeed PROPERTY CXX_STANDARD 23)

file(GLOB_RECURSE sources CONFIGURE_DEPENDS src/*.cpp include/*.h)
target_sources(lightspeed PRIVATE ${sources})


find_package(Eigen3)
target_link_libraries(lightspeed Eigen3::Eigen)

set_target_properties(lightspeed PROPERTIES PUBLIC_HEADER "include/lightspeed.h")
install(TARGETS lightspeed)