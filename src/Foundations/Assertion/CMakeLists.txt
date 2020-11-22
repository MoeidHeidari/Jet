cmake_minimum_required(VERSION 3.2)
project(JET)

set(SOURCE_FILES
    jet_assertion.h
    jet_assertion.cpp
    )

  add_library(Assertion SHARED STATIC ${SOURCE_FILES})

  install(TARGETS Assertion DESTINATION ${JET_INSTALL_LIB_DIR})
  install(FILES jet_assertion.h DESTINATION ${JET_INSTALL_INCLUDE_DIR})
