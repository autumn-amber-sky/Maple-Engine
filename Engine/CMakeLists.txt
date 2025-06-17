
# define which files are to be compiled,
# and specify that we are creating a library
add_library(MapleEngine SHARED
        src/App.cpp
        include/MapleCore.h
        src/App.cpp
        include/App.h
        src/Engine.cpp
        include/Engine.h
)

# defines our headers for linking???
target_include_directories(
        MapleEngine
        PUBLIC
        # CMAKE_CURRENT_SOURCE_DIR = directory of THIS cmake file
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# defines a macro ONLY when compiling to dll.
# this allows us to differentiate between compiling the library and
# importing headers into other projects
target_compile_definitions(MapleEngine PRIVATE MAPLE_ENGINE_EXPORTS)