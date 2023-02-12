#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(Node* &head,int d ){
    Node* temp= new Node(d);
    temp->next=head;
    head=temp;

}
void insertAtposition(Node* &head, int position, int d){

    //...............if we want to insert at 1st position
    // if(position==1){
    //     insertAtHead(head,d);
    //     return;
    // }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
    temp=temp->next;
        cnt++;
    }
    //creatinga node for d
    Node* nodeToInsert= new Node(d);
    nodeToInsert->next= temp->next;
    temp->next=nodeToInsert;
}

void print(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    //create node
  Node* node1= new Node(10);
  
  Node* head=node1;
  print(head);

  insertAtHead(head,12);
  print(head);

  insertAtHead(head,15);
  print(head);

  insertAtposition(head,1,22);
  print(head);

  return 0;
}
