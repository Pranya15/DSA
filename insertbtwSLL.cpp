#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
       this-> data = value;
       this-> next = nullptr;
    }
};

void insertAtPosition(Node* &head, int newData, int position) {

    // Step 1: Create a new node
    Node* newNode = new Node(newData);
    newNode->data = newData;
    newNode->next = nullptr;

    // Step 2: If list is empty
    if (head == nullptr) {
        head = newNode;
        return;
    }

    // Step 3: If inserting at beginning (position = 1)
    if (position == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    // Step 4: Traverse the list to reach (pos - 1)th node
    Node* current = head;
    int i = 1;

    while (i < position - 1 && current->next != nullptr) {
        current = current->next;
        i++;
    }

    // Step 5: Check if position is valid
    if (i < position - 1) {
        cout << "Invalid Position" << endl;
        return;
    }

    // Step 6: Link the new node
    newNode->next = current->next;
    current->next = newNode;
}

void traverse(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

}
    int main() {
    Node* head = nullptr;

    insertAtPosition(head, 10, 1);
    insertAtPosition(head, 20, 2);
    insertAtPosition(head, 30, 3);

    insertAtPosition(head, 15, 2);  // Insert in between

    traverse(head);
    
    return 0;
}
