set (ML_SOURCES
    "ml.h"
    "ml.cpp")

source_group("ml" FILES ${ML_SOURCES})

include_directories ("${PROJECT_SOURCE_DIR}/ml")

add_library(ml SHARED ${ML_SOURCES})

set_property (TARGET ml PROPERTY FOLDER "libraries")

set_target_properties (ml PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

install (TARGETS ml
         RUNTIME DESTINATION ${PROJECT_SOURCE_DIR}/_install
         LIBRARY DESTINATION ${PROJECT_SOURCE_DIR}/_install)

