#pragma once
#include <string>

class Item {
public:
    Item(std::string name, long id, double price, int stock);

    std::string getName() const;
    long getId() const;
    double getPrice() const;
    int getStock() const;

    void setPrice(double price);
    void setStock(int stock);

    friend std::ostream& operator<< (std::ostream& os, const Item item);

private:
    std::string _name;
    long _id;
    double _price;
    int _stock;
};