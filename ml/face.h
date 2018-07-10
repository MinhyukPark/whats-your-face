#ifndef FACE_H
#define FACE_H

#include <string>
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

class Face {
    public:
        void import_image(const std::string & filepath);
        std::string get_filename() const;
        cv::Mat get_image() const;
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
        cv::Mat image; 
        int dims;
        std::string filename;
};

#endif
