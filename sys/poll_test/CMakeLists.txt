cmake_minimum_required(VERSION 3.21)

project(
  poll_test
  VERSION 0.0.1
  DESCRIPTION "Poll interface test"
  LANGUAGES CXX
)

find_package(spdlog CONFIG REQUIRED)

set(SRC_FILES
  ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)

add_executable(poll_test
  ${SRC_FILES}
)

target_link_libraries(poll_test PRIVATE
  spdlog::spdlog_header_only
)
