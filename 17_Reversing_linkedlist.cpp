#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
   
   Node(int d){
    this->data=d;
    this->next=NULL;
   }
};
void reverseList(Node* head, int d) {

    
        Node* curr= new Node(d);
        Node* prev =NULL;
        //Node* curr=head;
        Node* forward=NULL;
        while(curr!=NULL){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        head= prev;
}
void print(Node* &head){
    Node* temp= head;
    temp->next=head;
    head=temp;

    if(head== NULL && head->next ==NULL){
        cout<<head;
    }
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
 }

int main(){

  Node* node1=new Node(1);
  Node* head= NULL;
  print(head);

  reverseList(head,  2);
  print(head);
  //cout<<"head"<<head->data<<"  ";
  reverseList(head,  3);
  print(head);
  reverseList(head,  4);
  print(head);
  reverseList(head,  5);
  print(head);


  return 0;

}

