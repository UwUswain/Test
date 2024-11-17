#include "Order_Bill.h"
#include <iostream>
using namespace std;

void Order_Bill::addOrder(const Order &order) {
    orders.push_back(order);
}

double Order_Bill::calculateTotalBill() const {
    double total = 0;
    for (const auto &order : orders) {
        total += order.getTotalPrice();
    }
    return total;
}

void Order_Bill::displayBill() const {
    cout << "=== Order Bill ===\n";
    for (const auto &order : orders) {
        order.displayOrder();
    }
    cout << "Total Bill: $" << calculateTotalBill() << "\n";
}

