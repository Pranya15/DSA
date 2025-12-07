#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node*prev;

    Node(int value){
        this->data=value;
        this->next=nullptr;
        this->prev=nullptr;
    }
};

void insertAtBeg(Node*&head, int newData){
 //create a newNode
    Node *newNode= new Node(newData);
    newNode->data = newData;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    if(head==nullptr){
    head=newNode;
    return;
    }
    else{
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}
void traverse(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

}

int main(){
    Node *head = nullptr;
    
    int value;
  //  cout << "Enter the value to be inserted in the first node: ";
  //  cin >> value;

  //  Node *Node1 = new Node(value);
  Node *Node1 = new Node(7);
    head = Node1;   

    int newData;
    cout << "Enter the new data to be inserted at beginning: ";
    cin >> newData;

    insertAtBeg(head, newData);

    cout << "List after insertion: ";
    traverse(head);

    return 0;
}