#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insertAtTail(Node* &tail, int d){
    Node* temp= new Node(d);
    tail->next= temp;
    temp->prev=tail;
    tail= temp;

}
void print(Node* &head){
    Node* temp= head;
    while (temp!=NULL){
     cout<<temp->data<<" ";
     temp=temp->next;
    } 
    cout<<endl; 
}

int main(){
    Node* node1= new Node(10);
    Node* head= node1;
    Node* tail=node1;
    print(head);

    insertAtTail(tail, 11);
    print(head);

    insertAtTail(tail, 12);
    print(head);
    
    insertAtTail(tail, 30);
    print(head);
    
return 0;
}