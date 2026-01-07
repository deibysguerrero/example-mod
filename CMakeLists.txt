cmake_minimum_required(VERSION 3.24)

project(AutoOrbes)

find_package(geode-sdk REQUIRED)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE SOURCES 
    "src/*.cpp"
    "src/*.hpp"
)

setup_geode_mod(
    ${PROJECT_NAME} 
    SOURCES ${SOURCES}
)


