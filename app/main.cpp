/**
 * @file main.cpp
 * @author Minhyuk Park
 * @date 8 Jul 2018
 * @brief File with int main
 */

#include <iostream>
#include <cstring>

#include "ml.h"

int main(int argc, char *argv[]) {
    if(argc >= 2) {
        if(std::strcmp(argv[1], "ml") == 0) {
            ML ml;
            std::string import_test = ml.ml_import_test();  
            std::cout << import_test << std::endl;
        }
    } else {
        fprintf(stderr, "%s", "no arguments given");
    }
	system("pause");
    return 0;
}
