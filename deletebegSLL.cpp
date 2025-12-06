#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteAtBeginning(Node* &head) {

    // Step 1: Check if list is empty
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    // Step 2: Move head to next node
    Node* temp = head;
    head = head->next;

    // Step 3: Delete the old head node
    delete temp;

    // Step 4: Output the list after deletion
    cout << "List after deletion at beginning: ";
    Node* p = head;
    while (p != nullptr) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Sample list creation (you can change it)
    head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};

    cout << "Original List: 10 20 30" << endl;

    deleteAtBeginning(head);

    return 0;
}