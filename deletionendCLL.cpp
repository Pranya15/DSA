#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteAtend(Node* &head) {

    if (head == nullptr) { 
        cout << "List is empty"; 
        return; 
    }

    if (head->next == head) {   // only one node
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;
    Node* prev = nullptr;

    // Traverse to last node
    while (temp->next != head) {
        prev = temp;
        temp = temp->next;
    }

    // temp = last node, prev = second-last node
    prev->next = head;
    delete temp;
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
   
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};
    head->next->next->next = new Node{40, nullptr};
    head->next->next->next->next = head;


    cout << "Original List: ";
    traverse(head);

    deleteAtend(head);

    cout << "After Deleting last Node: ";
    traverse(head);

    return 0;
}
