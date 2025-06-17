add_executable(MapleSandbox main.cpp
        src/SandboxApp.cpp
        include/SandboxApp.h)
target_include_directories(MapleSandbox PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(MapleSandbox PRIVATE MapleEngine)

# Copy DLL after build
# this feels like black magic
add_custom_command(TARGET MapleSandbox POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "$<TARGET_FILE:MapleEngine>"
        "$<TARGET_FILE_DIR:MapleSandbox>"
)