#include "Item.h"
#include "Order.h"
#include <vector>

class Store {
public:
    Store(std::vector<Item> items);

    void processOrder(const Order order);

    friend std::ostream& operator<< (std::ostream& os, const Store store);

private:
    std::vector<Item> _items;
};
