#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteAtEnd(Node* &head) {

    // Step 1: Check if list is empty
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    // Step 2: If the list has only one node
    if (head->next == nullptr) {
        Node* temp = head;
        head = nullptr;
        delete temp;
        cout << "List after deletion at end: (empty)" << endl;
        return;
    }

    // Step 3: Traverse to the second last node
    Node* current = head;
    while (current->next->next != nullptr) {
        current = current->next;
    }

    // Step 4: Delete the last node
    Node* temp = current->next;
    current->next = nullptr;
    delete temp;

    // Step 5: Output the list after deletion
    cout << "List after deletion at end: ";
    Node* p = head;
    while (p != nullptr) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Sample list
    head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};

    cout << "Original List: 10 20 30" << endl;

    deleteAtEnd(head);

    return 0;
}