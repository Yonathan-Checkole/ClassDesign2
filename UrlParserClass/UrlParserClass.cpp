#include "UrlParserClass.h"
#include <iostream>

UrlParserClass::UrlParserClass(std::string url) 
    : _url{ url }, _scheme{ UrlParserClass::getScheme() }, _authority{ UrlParserClass::getAuthority() }, _path{ UrlParserClass::getPath() } { }

std::string UrlParserClass::getUrl() const { return _url; }

std::string UrlParserClass::getScheme() const {
    int end = _url.find(':');
    return _url.substr(0, end + 1);
}

std::string UrlParserClass::getAuthority() const {
    int start = _url.find('/');
    int end = _url.find('/', start + 2);
    return _url.substr(start, end - start);
}

std::string UrlParserClass::getPath() const {
    int start = _url.find('/', _url.find('/') + 2);
    return _url.substr(start);
}

std::ostream& operator<< (std::ostream& os, const UrlParserClass url) {
    os << "URL: " << url._url << "\n    SCHEME: " << url._scheme << "\n    AUTHORITY: " << url._authority << "\n    PATH: " << url._path << "\n";
    return os;
}