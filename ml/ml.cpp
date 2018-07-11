/**
 * @file ml.cpp
 * @author Minhyuk Park
 * @date 8 Jul 2018
 * @brief File containing definitions for ML class
 */

#include "ml.h"
#include "face.h"

std::string ML::ml_import_test() {
    std::string test("ml import successful"); 
    return test; 
}

FaceShape ML::classify_face(Face face) {
    std::cout << "Classifying face: " << std::endl;
    face.display_info();
    return FaceShape::Round; 
}
