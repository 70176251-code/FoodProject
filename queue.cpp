#include <iostream>
#include <queue>
using namespace std;

// Global queue for orders
queue<string> orders;

// Add order
void insertOrder(string item) {
    orders.push(item);
    cout << "Order added: " << item << endl;
}

// Show all orders
void showOrders() {
    if (orders.empty()) {
        cout << "No orders available!\n";
        return;
    }

    queue<string> temp = orders;

    cout << "\n--- Orders List ---\n";
    while (!temp.empty()) {
        cout << temp.front() << endl;
        temp.pop();
    }
}
