#include "Store.h"
#include <iostream>

Store::Store(std::vector<Item> items)
    : _items{ items } { }


void Store::processOrder(const Order order) {
    for (int i = 0; i < _items.size(); i++) {
        for (int j = 0; j < order.getItems().size(); j++) {
            if (order.getItems()[j].getId() == _items[i].getId()) {
                _items[i].setStock(_items[i].getStock() - 1);
            }
        }
    }
}

std::ostream& operator<< (std::ostream& os, const Store store) {
    os << "Store:\n";

    for (int i = 0; i < store._items.size(); i++) {
        os << store._items[i].getName() << " x " << store._items[i].getStock() << "\n";
    }

    return os;
}
