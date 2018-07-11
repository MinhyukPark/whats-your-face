/**
 * @file face.h
 * @author Minhyuk Park
 * @date 10 Jul 2018
 * @brief header file for Face class
 */

#ifndef FACE_H
#define FACE_H

#include <string>
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

/**
 * @brief Face class
 * This class is a container for opencv Mat
 * with custom defined functions that are better
 * suited for the specific task of classifying
 * faceshapes.
 */ 
class Face {
    public:
        /**
         * @brief Load an image from the file system
         * This function loads an image when given a valid filepath
         * and creates a cv::Mat object and stores it in the proper
         * places as well as initilazing some of the fields in the
         * Face class
         * @param filepath const std::string & the filepath of the image
         */ 
        void import_image(const std::string & filepath);
        /**
         * @brief getter for filename
         * This is a standard getter function for the filename
         * attribute of Face object.
         * @return filename std::string the filename of the imported image
         */
        std::string get_filename() const;
        /**
         * @brief getter for image
         * This is a standard getter function for the image
         * attribute of Face object.
         * @return image cv::Mat the imported image object
         */
        cv::Mat get_image() const;
        /**
         * @brief Display information about the image
         * This function uses the overridden << operator to
         * print out relevant information about the image.
         * Look at the header file for implementatin details.
         */
        void display_info() const;
        friend std::ostream& operator<< (std::ostream &out, const Face & face) {
            out << face.get_filename() << std::endl;
            out << "dimension is: ";
            out << face.image.dims << std::endl;
            out << "size is: ";
            out << face.image.rows;
            out << " by ";
            out << face.image.cols << std::endl;
            return out;
        }
    private:
        /// imported image is stored here
        cv::Mat image; 
        /// the dimension of the image >=2
        int dims;
        /// the filepath given at import
        std::string filename;
};

#endif
