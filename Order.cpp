#include "Order.h"
#include <iostream>
using namespace std;

Order::Order(int id, string name, int qty, double pr)
    : orderID(id), itemName(name), quantity(qty), price(pr) {}

string Order::getItemName() const {
    return itemName;
}
//const
double Order::getTotalPrice() const {
    return quantity * price;
}

void Order::displayOrder() const {
    cout << "Order ID: " << orderID << "\n"
         << "Item: " << itemName << "\n"
         << "Quantity: " << quantity << "\n"
         << "Price per item: $" << price << "\n"
         << "Total Price: $" << getTotalPrice() << "\n\n"
         << "______________________" << "\n";
}
