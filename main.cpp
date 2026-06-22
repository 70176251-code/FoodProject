#include <iostream>
using namespace std;

// External functions from other files
void insertOrder(string item);
void showOrders();
void insertBST(string item);
void searchBST(string item);

int main() {
    int choice;
    string item;

    while (true) {
        cout << "\n===== FOOD DELIVERY DSA BACKEND =====\n";
        cout << "1. Add Order (Queue)\n";
        cout << "2. Show Orders\n";
        cout << "3. Add Menu Item (BST)\n";
        cout << "4. Search Menu Item (BST)\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter item: ";
            cin >> item;
            insertOrder(item);
        }
        else if (choice == 2) {
            showOrders();
        }
        else if (choice == 3) {
            cout << "Enter item: ";
            cin >> item;
            insertBST(item);
        }
        else if (choice == 4) {
            cout << "Enter item: ";
            cin >> item;
            searchBST(item);
        }
        else if (choice == 5) {
            break;
        }
        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
