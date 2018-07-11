/**
 * @file ml.cpp
 * @author Minhyuk Park
 * @date 8 Jul 2018
 * @brief File containing definitions for ML class
 */

#include "ml.h"
#include "face.h"

/**
 * @brief Check whether ml library was imported properly
 * This method simply checks whether the library was imported
 * properly or not from a caller class by having a 
 * pre-defined string that is returned when the library
 * is imported properly.
 * @return std::string the message that offers a validity check
 */
std::string ML::ml_import_test() {
    std::string test("ml import successful"); 
    return test; 
}

/**
 * @brief Classify Face into FaceShapes
 * This is a standand machine learning function
 * that will classify an input Face into FaceShape enums
 * the values of which are self-documenting
 * @param face Face the face to be classified
 * @return FaceShape enum that is the face shape
 */
FaceShape ML::classify_face(Face face) {
    std::cout << "Classifying face: " << std::endl;
    face.display_info();
    return FaceShape::Round; 
}
