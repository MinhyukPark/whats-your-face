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
        /**
         * @brief Check whether ml library was imported properly
         * This method simply checks whether the library was imported
         * properly or not from a caller class by having a 
         * pre-defined string that is returned when the library
         * is imported properly.
         * @return std::string the message that offers a validity check
         */
        std::string ml_import_test();
        /**
         * @brief Classify Face into FaceShapes
         * This is a standand machine learning function
         * that will classify an input Face into FaceShape enums
         * the values of which are self-documenting
         * @param face Face the face to be classified
         * @return FaceShape enum that is the face shape
         */
        FaceShape classify_face(Face face);
    private:
        /// A reference counter, not used currently
        int count; 
};

#endif
