cmake_minimum_required(VERSION 3.24)

project(AutoOrbesMod)

find_package(geode-sdk REQUIRED)

# Configura el mod usando el archivo main.cpp de la carpeta src
setup_geode_mod(${PROJECT_NAME} SOURCES src/main.cpp)

