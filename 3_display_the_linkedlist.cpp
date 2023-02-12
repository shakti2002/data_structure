#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
//constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
//void InsertAtBegining(Node* &Head, int d){
 //   Node* temp=Head
//}
void print(Node* &Head){
    Node *temp=Head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    //creating node
    Node* node1=new Node(10);
     //head pointed node 1
     Node* head= node1;
     print(head);
}