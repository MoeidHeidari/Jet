cmake_minimum_required(VERSION 3.2)
project(JET)

add_subdirectory(Foundations/Assertion)
set(SOURCE_FILES main.cpp main.h)

add_executable(JET ${SOURCE_FILES})

target_link_libraries(JET Assertion)
install(TARGETS JET DESTINATION ${JET_INSTALL_BIN_DIR})
