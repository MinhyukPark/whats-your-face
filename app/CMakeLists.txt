include_directories ("${PROJECT_SOURCE_DIR}/ml")

add_executable (app main.cpp)
add_sanitizers (app)

target_link_libraries (app ml)


