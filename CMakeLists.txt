cmake_minimum_required(VERSION 3.9.1)
project(minichar
        VERSION 0.1
        DESCRIPTION "c-string compression library"
        LANGUAGES CXX)
add_library(${PROJECT_NAME} STATIC)

target_sources(${PROJECT_NAME}
  )

target_include_directories(${PROJECT_NAME}
  ${CMAKE_CURRENT_SOURCE_DIR}/src
)
