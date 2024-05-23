#include <iostream>
#include <string>
using namespace std;

class ShopItemOrder {
private:
    string itemName;
    double itemUnitPrice;
    int numberOfItems;

public:
    ShopItemOrder() : itemName(""), itemUnitPrice(0.0), numberOfItems(0) {}

    ShopItemOrder(const string& name, double price, int quantity)
        : itemName(name), itemUnitPrice(price), numberOfItems(quantity) {}

    void setItemName(const string& name) {
        itemName = name;
    }

    void setItemUnitPrice(double price) {
        if (price >= 0) {
            itemUnitPrice = price;
        }
    }

    void setNumberOfItems(int quantity) {
        if (quantity >= 0) {
            numberOfItems = quantity;
        }
    }

    string getItemName() const {
        return itemName;
    }

    double getItemUnitPrice() const {
        return itemUnitPrice;
    }

    int getNumberOfItems() const {
        return numberOfItems;
    }

    double getTotalPrice() const {
        return itemUnitPrice * numberOfItems;
    }

    void printOrder() const {
        cout << "Item Name: " << itemName << "\n"
             << "Unit Price: $" << itemUnitPrice << "\n"
             << "Quantity: " << numberOfItems << "\n"
             << "Total Price: $" << getTotalPrice() << endl;
    }
};

int main() {
    ShopItemOrder order("Laptop", 999.99, 2);
    order.printOrder();

    order.setItemName("Smartphone");
    order.setItemUnitPrice(499.99);
    order.setNumberOfItems(3);
    order.printOrder();

    return 0;
}
