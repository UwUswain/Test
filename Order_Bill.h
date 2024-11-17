#ifndef ORDER_BILL_H
#define ORDER_BILL_H

#include <vector>
#include "Order.h"
using namespace std;

class Order_Bill {
private:
    vector<Order> orders;

public:
    void addOrder(const Order &order);
    double calculateTotalBill() const;
    //void displayTime() const;
    //calculate
    void displayBill() const;
};

#endif // ORDER_BILL_H

