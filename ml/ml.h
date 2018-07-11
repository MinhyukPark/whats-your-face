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

/**
 * @brief enum of different FaceShapes
 * The ordering does not hold any significance
 */
enum class FaceShape {
    Round, 
    Oval,
    Square,
    Oblong,
    Diamond,
    Heart,
    Triangular 
};

/**
 * @brief ML Class
 * This class supports machine learning functions
 * such as training and classifying while being
 * optimized for the Face class
 */ 
class ML {
    public:
        std::string ml_import_test();
        FaceShape classify_face(Face face);
    private:
        int count; 
};

#endif
