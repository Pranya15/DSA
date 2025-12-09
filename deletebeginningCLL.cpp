#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteAtBeginning(Node* &head) {

    if (head == nullptr) { 
        cout << "List is empty"; 
        return; 
    }

    // Only one node
    if (head->next == head) {
        delete head;
        head = nullptr;
        return;
    }

    // More than one node
    Node* temp = head;

    // Find last node
    while (temp->next != head) {
        temp = temp->next;
    }

    // Fix links
    temp->next = head->next;

    Node* del = head;
    head = head->next;

    delete del;
}

void traverse(Node* head) {
    if (head == nullptr) return;

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

int main() {
    // Creating a circular linked list: 10 -> 20 -> 30 -> back to 10
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};
    head->next->next->next = head;  

    cout << "Original List: ";
    traverse(head);

    deleteAtBeginning(head);

    cout << "After Deleting First Node: ";
    traverse(head);

    return 0;
}
