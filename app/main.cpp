/**
 * @file main.cpp
 * @author Minhyuk Park
 * @date 8 Jul 2018
 * @brief File with int main
 */

#include <iostream>
#include <string>

#include "ml.h"
#include "face.h"

int main(int argc, char *argv[]) {
    if(argc >= 2) {
        if(std::strcmp(argv[1], "ml") == 0) {
            ML ml;
            std::string import_test = ml.ml_import_test();  
            std::cout << import_test << std::endl;
        }
    } else {
        std::cout << "no arguments given" << std::endl;
        return 1;
    }
    std::string filepath(argv[2]);
    Face test_face;
    test_face.import_image(filepath);
    ML test_ml;
    test_ml.classify_face(test_face); 
    return 0;
}
