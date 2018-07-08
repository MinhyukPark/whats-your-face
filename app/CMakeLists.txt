include_directories ("${PROJECT_SOURCE_DIR}/ml")

add_executable (app main.cpp)
add_sanitizers (app)

target_link_libraries (app ml)

set_property (TARGET app PROPERTY FOLDER "executables")

set_target_properties (app PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

install (TARGETS app RUNTIME DESTINATION ${PROJECT_SOURCE_DIR}/_install)


