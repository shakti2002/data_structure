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

void insertAtHead(Node* &head, int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;

}
void insertAtPosition(Node* &head, Node* &tail, int position, int d){

    //...............if we want to insert at 1st position
    if(position==1){
        insertAtHead(head,d);
        return;
    }

    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
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
     
        insertAtHead(head,11);
        print(head);

        insertAtHead(head,12);
        insertAtHead(head,13);
        print(head);
        
        insertAtPosition(head, tail, 3, 22);
        print(head);
 
        insertAtPosition(head, tail, 2, 24);
        print(head);

        insertAtPosition(head, tail, 1, 100);
        print(head);

        cout<<"head"<<head->data<<endl;
        cout<<"tail"<<tail->data<<endl;


return 0;
    }
