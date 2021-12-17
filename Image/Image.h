#include <string>
#include <iostream>

class Image {
public:
    Image(std::string fileName, std::string imageType, int month, int day,
        int year, double size, std::string authorName, int width, int height, 
        std::string apertureSize, std::string exposureTime, int isoValue, bool flashEnabled);

    std::string getFileName() const;
    std::string getImageType() const;
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    double getSize() const;
    std::string getAuthorName() const;
    int getWidth() const;
    int getHeight() const;
    std::string getApertureSize() const;
    std::string getExposureTime() const;
    int getIsoValue() const;
    bool isFlashEnabled() const;

    void setFileName(std::string fileName);
    void setImageType(std::string imageType);
    void setMonth(int month);
    void setDay(int day);
    void setYear(int year);
    void setSize(double size);
    void setAuthorName(std::string authorName);
    void setWidth(int width);
    void setHeight(int height);
    void setApertureSize(std::string apertureSize);
    void setExposureTime(std::string exposureTime);
    void setIsoValue(int isoValue);
    void setFlashEnable(bool flashEnabled);

    friend std::ostream& operator<< (std::ostream& os, const Image image);

private:
    std::string _fileName;
    std::string _imageType;
    int _month;
    int _day;
    int _year;
    double _size;
    std::string _authorName;
    int _width;
    int _height;
    std::string _apertureSize;
    std::string _exposureTime;
    int _isoValue;
    bool _flashEnabled;
};
