#include <iostream>
#include <ctime>

#define ORDERS 100

using namespace std;

class Order {
    public:
        int order_id, qty;
        string product_service, order_date;

    Order() {
        order_id = -1;
        qty = 0;
        product_service = "N/A";
    }
    
    Order(int order_id, int qty, string product_service) {
        order_id = order_id;
        qty = qty;
        product_service = product_service;
    }

    void place() {
        time_t now = time(0);
        order_date = ctime(&now);
    }
};

int main() 
{
    string inventory[] = {"Fender Stratocaster", "Gibson Les Paul", "Ibanez RG", "Fender Telecaster"};
    int quantities[] = {2, 3, 4, 5};
    int i, c = 0;
    Order myOrders[ORDERS];

    for (i=0; i<ORDERS; i++) {
        myOrders[i].order_id = i;
        myOrders[i].qty = quantities[c];
        myOrders[i].product_service = inventory[c];
        myOrders[i].place();
        cout << "======NEW ORDER======" << endl;
        cout << "Order ID: " << myOrders[i].order_id << endl;
        cout << "Item: " << myOrders[i].product_service << endl;
        cout << "Quantity: " << myOrders[i].qty << endl;
        cout << "Order Placed: " << myOrders[i].order_date << endl;
        c++;
        if (c > 3)
            c = 0;
    }


    return 0;
}