#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value){
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

void insertAtBeg(Node*&head,int newData){
    Node *newNode=new Node(newData);
    newNode->data=newData;
    newNode->next=nullptr;
    newNode->prev=nullptr;

    if(head==nullptr){
        newNode->next=newNode;
        newNode->prev=newNode;
        head=newNode;
        return;
    }
      newNode->next=head;
      newNode->prev=head->prev;
      head->prev->next=newNode;
      head->prev=newNode;
      head=newNode;
}

Node *head = NULL;

// Traversal of Circular Doubly Linked List
void traverseCDLL() {

    // Case 1: List empty
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node *temp = head;

    // Forward traversal
    cout << "Forward Traversal: ";
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;

    // Backward traversal
    cout << "Backward Traversal: ";
    temp = head->prev;  // last node
    do {
        cout << temp->data << " ";
        temp = temp->prev;
    } while (temp != head->prev);
    
    cout << endl;
}

int main() {

    // Manually create 3 nodes to make a CDLL
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);

    head = n1;

    n1->next = n2;
    n2->next = n3;
    n3->next = n1;

    n1->prev = n3;
    n2->prev = n1;
    n3->prev = n2;

    traverseCDLL();

    cout << "\nInserting at Beginning...\n";
    insertAtBeg(head, 5);

    traverseCDLL();

    return 0;
}
