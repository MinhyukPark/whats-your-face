#include "face.h"

/**
 * @brief Load an image from the file system
 * This function loads an image when given a valid filepath
 * and creates a cv::Mat object and stores it in the proper
 * places as well as initilazing some of the fields in the
 * Face class
 * @param filepath const std::string & the filepath of the image
 */ 
void Face::import_image(const std::string & filepath) {
    cv::Mat image = cv::imread(filepath, CV_LOAD_IMAGE_COLOR); 
    this->image = image;
    this->dims = image.dims;
    this->filename = filepath;
}

/**
 * @brief Display information about the image
 * This function uses the overridden << operator to
 * print out relevant information about the image.
 * Look at the header file for implementatin details.
 */
void Face::display_info() const {
    std::cout << *this << std::endl;
}

/**
 * @brief getter for filename
 * This is a standard getter function for the filename
 * attribute of Face object.
 * @return filename std::string the filename of the imported image
 */
std::string Face::get_filename() const {
    return this->filename;
}

/**
 * @brief getter for image
 * This is a standard getter function for the image
 * attribute of Face object.
 * @return image cv::Mat the imported image object
 */
cv::Mat Face::get_image() const {
    return this->image;
}
