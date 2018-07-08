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
        return 1;
    }
    return 0;
}
