cmake_minimum_required(VERSION 3.19)
project(mtlpp CXX)
add_library(mtlpp)

file(GLOB hpp_files src/*.hpp)
file(GLOB mm_files src/*.mm)
target_sources(mtlpp PRIVATE ${hpp_files} ${mm_files} mtlpp.hpp mtlpp.mm)
target_compile_features(mtlpp PRIVATE cxx_std_17)
target_link_libraries(mtlpp
        PRIVATE
        "-framework Cocoa"
        "-framework Foundation"
        "-framework Metal"
        "-framework QuartzCore"
)