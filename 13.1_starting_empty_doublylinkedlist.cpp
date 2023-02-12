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

void insertAtTail(Node* &head, Node* &tail, int d){
    //......empty list
    if(head==NULL){
     Node* temp= new Node(d);
     head=temp;
     tail=temp;
    }
    else
    {
    Node* temp= new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
    
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
        insertAtTail(head, tail, d);
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
    
    Node* head=NULL;
    Node* tail=NULL;
    print(head);

    insertAtTail(head, tail, 11);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;


    insertAtTail(head, tail, 12);
    insertAtTail(head, tail, 13);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    insertAtPosition(head, tail, 4, 101);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    return 0;
}

