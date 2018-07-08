set (ML_SOURCES
    "ml.h"
    "ml.cpp")

source_group("" FILES ${ML_SOURCES})

add_library(ml STATIC ${ML_SOURCES})

