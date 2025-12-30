#include <iostream>
using namespace std;

// Node class
class node {
public:
    int data;
    node* left;
    node* right;

    // Constructor
    node(int key) {
        data = key;
        left = nullptr;
        right = nullptr;
    }
};

// Recursive search function
void searchBST(node* root, int key) {

    // If root is NULL, key not found
    if (root == nullptr) {
        cout << "Key not found" << endl;
        return;
    }

    // If key is equal to root data
    else if (root->data == key) {
        cout << "Key found: " << key << endl;
        return;
    }

    // If key is less than root data, search in left subtree
    else if (key < root->data) {
        searchBST(root->left, key);
    }

    // If key is greater than root data, search in right subtree
    else {
        searchBST(root->right, key);
    }
}

// Insert function (for creating BST)
void insertBST(node*& root, int key) {
    if (root == nullptr) {
        root = new node(key);
        return;
    }
    if (key < root->data)
        insertBST(root->left, key);
    else if (key > root->data)
        insertBST(root->right, key);
}

int main() {
    node* root = nullptr;

    // Creating BST
    insertBST(root, 50);
    insertBST(root, 30);
    insertBST(root, 70);
    insertBST(root, 20);
    insertBST(root, 40);
    insertBST(root, 60);
    insertBST(root, 80);

    int key;
    cout << "Enter key to search: ";
    cin >> key;

    searchBST(root, key);

    return 0;
}
