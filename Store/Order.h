#pragma once
#include "Item.h"
#include <vector>

class Order {
public:
    Order(std::vector<Item> items);

    void addItem(Item item);
    double getPrice() const;
    std::vector<Item> getItems() const;

private:
    std::vector<Item> _items;
};