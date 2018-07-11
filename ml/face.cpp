#include "face.h"

void Face::import_image(const std::string & filepath) {
    cv::Mat image = cv::imread(filepath, CV_LOAD_IMAGE_COLOR); 
    this->image = image;
    this->dims = image.dims;
    this->filename = filepath;
}

void Face::display_info() const {
    std::cout << *this << std::endl;
}

std::string Face::get_filename() const {
    return this->filename;
}

cv::Mat Face::get_image() const {
    return this->image;
}
