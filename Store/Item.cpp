#include "Item.h"
#include <iomanip>

Item::Item(std::string name, long id, double price, int stock)
    : _name{ name }, _id { id }, _price{ price }, _stock{ stock } { }

std::string Item::getName() const { return _name; }

long Item::getId() const { return _id; }

double Item::getPrice() const { return _price; }

int Item::getStock() const { return _stock; }

void Item::setPrice(double price) {
    if (price > 0) {
        _price = price;
    }
}

void Item::setStock(int stock) {
    if (stock >= 0) {
        _stock = stock;
    }
}

std::ostream& operator<< (std::ostream& os, const Item item) {
    os << "Name: " << item._name << "\nID: " << item._id << "\nPrice: $" << std::fixed << std::setprecision(2) << item._price << "\nStock: " << item._stock << "\n";
    return os;
}
