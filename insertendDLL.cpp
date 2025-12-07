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

void insertAtEnd(Node*&head, int newData){
 //create a newNode
    Node *newNode= new Node(newData);
    newNode->data = newData;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    if(head==nullptr){
    head=newNode;
    return;
    }
    Node *temp=head;
    while(temp->next!=nullptr){
      temp=temp->next;
      temp->next=newNode;
      newNode->prev=temp;
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
    cout << "Enter the new data to be inserted at end: ";
    cin >> newData;

    insertAtEnd(head, newData);

    cout << "List after insertion: ";
    traverse(head);

    return 0;
}