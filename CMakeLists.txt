cmake_minimum_required(VERSION 3.21)

project(
  sys
  VERSION 0.0.1
  DESCRIPTION "System call interface test"
  LANGUAGES CXX
)

# set compile options.
set(CMAKE_CXX_STANDARD 20)

add_subdirectory(sys)

# install(EXPORT ${PROJECT_NAME}-config
#   NAMESPACE sys::
#   DESTINATION ${CMAKE_INSTALL_PREFIX}/share/${PROJECT_NAME}
# )

