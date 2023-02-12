#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    //constructure
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
  void insertAtTail(Node* &tail, int d){
    //creating node
    Node* temp= new Node(d);
    tail->next=temp;
    tail=temp;    //tail=tail->next;
  }

void insertAtposition(Node* &tail, Node* &head, int position, int d){
  Node* temp=head;
  int cnt=1;
  
  while(cnt<position-1){
    temp=temp->next;
    cnt++;
    }
    //inserting at last position............
    if(temp->next==NULL){
      insertAtTail(tail,d);
      return;
    }
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
    }

void print(Node* &head){
  Node* temp= head;
  
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
    cout<<endl;
  }


int main(){
  Node* node1=new Node(10);

  Node* head= node1;
  Node* tail= node1;
  print(head);

  insertAtTail(tail, 12);
  print(head);

  insertAtTail(tail, 15);
  print(head);

  insertAtposition(tail, head, 4, 22);
  print(head);

  cout<<"head"<<head->data<<endl;
  cout<<"tail"<<tail->data<<endl;
return 0;
}