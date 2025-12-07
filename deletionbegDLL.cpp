#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node *prev;
};

void deleteAtBeginning(Node* &head) {

    // Step 1: Check if list is empty
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }
    //only one node
    if(head->next==nullptr){
        Node *temp=head;
        head=nullptr;
        delete temp;
        return;
    }
    Node *temp=head;
    head=head->next;
    head->prev=nullptr;
    delete temp;
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

    // Create some nodes
    head = new Node{10, nullptr, nullptr};
    head->next = new Node{20, nullptr, head};
    head->next->next = new Node{30, nullptr, head->next};

    cout << "Original List: ";
    traverse(head);

    cout << "\nDeleting first node...\n";

    deleteAtBeginning(head);

    cout << "List after deletion: ";
    traverse(head);

    return 0;
}
