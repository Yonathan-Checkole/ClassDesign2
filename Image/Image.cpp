#include "Image.h"
#include <iostream>
#include <string>

Image::Image(std::string fileName, std::string imageType, int month, int day,
        int year, double size, std::string authorName, int width, int height, 
        std::string apertureSize, std::string exposureTime, int isoValue, bool flashEnabled)
            : _fileName{ fileName }, _imageType{ imageType }, _month{ month },
            _day{ day }, _year{ year }, _size{ size }, _authorName{ authorName },
            _width{ width }, _height{ height }, _apertureSize{ apertureSize },
            _exposureTime{ exposureTime }, _isoValue {isoValue}, _flashEnabled{ flashEnabled } { }

std::string Image::getFileName() const { return _fileName; }

std::string Image::getImageType() const { return _imageType; }

int Image::getMonth() const { return _month; }

int Image::getDay() const { return _day; }

int Image::getYear() const { return _year; }

double Image::getSize() const { return _size; }

std::string Image::getAuthorName() const { return _authorName; }

int Image::getWidth() const { return _width; }

int Image::getHeight() const { return _height; }

std::string Image::getApertureSize() const { return _apertureSize; }

std::string Image::getExposureTime() const { return _exposureTime; }

int Image::getIsoValue() const { return _isoValue; }

bool Image::isFlashEnabled() const { return _flashEnabled; }

void Image::setFileName(std::string fileName) {
    if (fileName.length() > 0) {
        _fileName = fileName;
    }
}

void Image::setImageType(std::string imageType) {
    if (imageType == "PNG" || imageType == "GIF" || imageType == "JPEG") {
        _imageType = imageType;
    }
}

void Image::setMonth(int month) {
    if (month <= 12 && month > 0) {
        _month = month;
    }
}

void Image::setDay(int day) {
    if (day <+ 31 && day > 0) {
        _day = day;
    }
}

void Image::setYear(int year) {
    if (year > 0) {
        _year = year;
    }
}

void Image::setSize(double size) {
    if (size > 0) {
        _size = size;
    }
}

void Image::setAuthorName(std::string authorName) {
    if (authorName.length() > 0) {
        _authorName = authorName;
    }
}

void Image::setWidth(int width) {
    if (width > 0) {
        _width = width;
    }
}

void Image::setHeight(int height) {
    if (height > 0) {
        _height = height;
    }
}

void Image::setApertureSize(std::string apertureSize){
    if (apertureSize.substr(0, 2) == "f/" && std::stoi(apertureSize.substr(2)) > 0) {
        _apertureSize = apertureSize;
    }
}

void Image::setExposureTime(std::string exposureTime) {
    if (exposureTime.substr(0, 2) == "1/" && std::stoi(exposureTime.substr(2)) > 0) {
        _exposureTime = exposureTime;
    } 
}

void Image::setIsoValue(int isoValue) {
    if (isoValue > 0) {
        _isoValue = isoValue;
    }
}

void Image::setFlashEnable(bool flashEnabled) {
    _flashEnabled = flashEnabled;
}

std::ostream& operator<< (std::ostream& os, const Image image) {
    os << "File Name: " << image._fileName << "\nimage Type: " << image._imageType << "\nDate: " << image._month << "/" << image._day << "/" << image._year << "\nSize: " << image._size << " MB\nAuthor: " << image._authorName << "\nDimensions: " << image._width << "x" << image._height << "\nAperture Size: " << image._apertureSize << "\nExposure Time: " << image._exposureTime << "\nIso Value: " << image._isoValue << "\nFlash Enabled: " << image._flashEnabled << "\n";
    return os;
}
