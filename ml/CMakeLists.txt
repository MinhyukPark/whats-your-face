set (ML_SOURCES
    "ml.h"
    "ml.cpp")

set (FACE_SOURCES
    "face.h"
    "face.cpp" )

source_group("" FILES ${ML_SOURCES})
source_group("" FILES ${FACE_SOURCES})

add_library(ml STATIC ${ML_SOURCES})
add_library(face STATIC ${FACE_SOURCES})

