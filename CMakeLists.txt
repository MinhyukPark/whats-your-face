cmake_minimum_required (VERSION 2.6)

project (whats-your-face)

set_property (GLOBAL PROPERTY USE_FOLDERS ON)

# adding sanitizers for cmake
set (CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/externals/sanitizers-cmake/cmake" ${CMAKE_MODULE_PATH})
find_package (Sanitizers)

# adding opencv
find_package( OpenCV REQUIRED)

set (CMAKE_CXX_FLAGES "${CMAKE_CXX_FLAGS_RELEASE} /W4")
include_directories( ${OpenCV_INCLUDE_DIRS})


message ("using flags:" ${CMAKE_CXX_FLAGS})

add_subdirectory(app)
add_subdirectory(ml)

#enable_testing()
#add_test(ImportTestML ${PROJECT_BINARY_DIR}/bin/app "ml")
