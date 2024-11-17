#ifndef ORDER_H
#define ORDER_H
using namespace::std;
#include <string>

class Order {
private:
    int orderID;
    string itemName;
    int quantity;
    double price;

public:
    Order(int id, string name, int qiy, double pr);

    string getItemName() const;
    double getTotalPrice() const;
    void displayOrder() const;
};

#endif // ORDER_H

