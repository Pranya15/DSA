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
        this->data = key;
        this->left = nullptr;
        this->right = nullptr;
    }
};

// Function to insert a key in BST
void insertBST(node*& root, int key) {

    // If root is NULL, create new node
    if (root == nullptr) {
        node* newNode = new node(key);
        root = newNode;
        return;
    }

    node* current = root;
    node* parent = root;

    // Traverse the tree
    while (current != nullptr) {
        parent = current;

        if (key > current->data) {
            current = current->right;
        }
        else if (key < current->data) {
            current = current->left;
        }
        else { // key == current->data
            cout << "Duplicate key found: " << key << endl;
            return;
        }
    }

    // Create new node
    node* newNode = new node(key);

    // Attach new node
    if (key > parent->data) {
        parent->right = newNode;
    }
    else {
        parent->left = newNode;
    }
}

// Inorder traversal (to check BST)
void inorder(node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    node* root = nullptr;

    insertBST(root, 50);
    insertBST(root, 30);
    insertBST(root, 70);
    insertBST(root, 20);
    insertBST(root, 40);
    insertBST(root, 60);
    insertBST(root, 80);

    cout << "Inorder traversal of BST: ";
    inorder(root);

    return 0;
}
