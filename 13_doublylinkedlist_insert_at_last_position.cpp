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

void print(Node* &head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAtTail(Node* &tail, int d){
    Node* temp= new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    Node* temp= head;
     
     int cnt=1;
     while(cnt<position-1){
        temp=temp->next;
        cnt++;
     }
     //inserting at last
     if(temp->next==NULL){
        insertAtTail(tail, d);
        return;
     }
      //creating a node for d
    Node* nodetoinsert= new Node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
}

int main(){
    Node* node1= new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);

    insertAtTail(tail, 11);
    print(head);

    insertAtTail(tail, 12);
    insertAtTail(tail, 13);
    print(head);

    insertAtPosition(head, tail, 5, 101);
    print(head);

    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    return 0;
}

