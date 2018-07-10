/**
 * @file ml.h
 * @author Minhyuk Park
 * @date 8 Jul 2018
 * @brief header file for ML class
 */
#ifndef ML_H
#define ML_H

#include <string>
#include "face.h"

enum class FaceShape {
    Round,
    Oval,
    Square,
    Oblong,
    Diamond,
    Heart,
    Triangular 
};

class ML {
    public:
        std::string ml_import_test();
        FaceShape classify_face(Face face);
    private:
        int count; 
};

#endif
