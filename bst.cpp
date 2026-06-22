#include <iostream>
using namespace std;

struct Node {
    string data;
    Node* left;
    Node* right;
};

Node* root = NULL;

// Create node
Node* createNode(string item) {
    Node* newNode = new Node();
    newNode->data = item;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Insert in BST
Node* insert(Node* root, string item) {
    if (root == NULL)
        return createNode(item);

    if (item < root->data)
        root->left = insert(root->left, item);
    else
        root->right = insert(root->right, item);

    return root;
}

// Search BST
bool search(Node* root, string item) {
    if (root == NULL)
        return false;

    if (root->data == item)
        return true;

    if (item < root->data)
        return search(root->left, item);

    return search(root->right, item);
}

// Wrapper functions (used in main.cpp)
void insertBST(string item) {
    root = insert(root, item);
    cout << "Menu item added: " << item << endl;
}

void searchBST(string item) {
    if (search(root, item))
        cout << "Item found in menu!\n";
    else
        cout << "Item not found!\n";
}
