cmake_minimum_required(VERSION 3.31)
project(MapleEngineProject)

set(CMAKE_CXX_STANDARD 20)

# this CMakeLists.txt functions as the root of the project
# we can use this to define subdirectories to look for other cmake files,
# which in turn allow us to create separate compilable modules.

add_subdirectory(Engine)
add_subdirectory(Sandbox)
