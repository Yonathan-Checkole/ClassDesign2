#include <string>
#include <iostream>

class UrlParserClass {
public:
    UrlParserClass(std::string url);

    std::string getUrl() const;
    std::string getScheme() const;
    std::string getAuthority() const;
    std::string getPath() const;

    friend std::ostream& operator<< (std::ostream& os, const UrlParserClass url);

private:
    std::string _url;
    std::string _scheme;
    std::string _authority;
    std::string _path;
};
