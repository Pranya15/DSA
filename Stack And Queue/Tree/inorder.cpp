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

// Recursive In-Order Traversal function
void inorderTraversal(node* root) {

    // node pointer parent equal to root
    node* parent = root;

    // If parent is NULL, return
    if (parent == nullptr) {
        return;
    }

    // In-order traversal of left subtree
    inorderTraversal(parent->left);

    // Print parent data
    cout << parent->data << " ";

    // In-order traversal of right subtree
    inorderTraversal(parent->right);
}

// Insert function to create BST
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

    // Create BST
    insertBST(root, 50);
    insertBST(root, 30);
    insertBST(root, 70);
    insertBST(root, 20);
    insertBST(root, 40);
    insertBST(root, 60);
    insertBST(root, 80);

    cout << "In-Order Traversal: ";
    inorderTraversal(root);

    return 0;
}
