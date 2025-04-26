cmake_minimum_required(VERSION 3.12)
project(cpp_app)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/exe)

file(GLOB sourcefiles "src/x86/*.h" "src/x86/*.cpp" "src/*.h" "src/*.cpp")
add_executable(${PROJECT_NAME} ${sourcefiles}
)

option(NO_SDL "Disable SDL support" OFF)

if(NO_SDL)
    add_compile_definitions(NO_SDL)
    message(STATUS "No SDL support.")
else()
    find_package(OpenGL)
    target_link_libraries(${PROJECT_NAME} ${OPENGL_LIBRARIES} SDL2_image SDL2_ttf SDL2 SDL2main)
endif()
