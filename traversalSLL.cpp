#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    //constructor function 
    Node(int value){
       this-> data= value;
       this-> next= nullptr;
    }
};

void traverse(Node*&head){
    Node *temp=head;

    while(temp!=nullptr){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }

}

void insertAtBeg(Node* &head , int newData){
    //create a newNode
    Node *newNode= new Node(newData);
    //newNode->next= head
    newNode->next=head;
    //head=newNode
    head=newNode;
}
int main(){
    int value;
    cout<< "Enter the value to be inserted in the first node:";
    cin>> value;
    Node *Node1= new Node(value);
    Node *head = Node1;

    int newData;
    cout<<"Enter the new data to be inserted:";
    cin>> newData;
    
    insertAtBeg(head,newData);
    traverse(head);
    return 0;
}
