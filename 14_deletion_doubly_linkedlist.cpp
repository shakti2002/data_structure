#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    //constuctor
    Node(int d){
        this->data= d;
        this->next= NULL;
        this->prev=NULL;
    }
    //destructor
    ~Node(){
        int value= this->data;
        //memory free
        if(this->next!=NULL){
         delete next;
         this->next=NULL;
        }
        cout<<"memory free for node with data"<<value<<endl;
    }
};

void insertAtTail(Node* &tail, int d){
    //new node create
    Node* temp= new Node(d);
    tail->next=temp;
    tail=temp;   //tail=tail->next
}
void print(Node* &head){
    Node* temp= head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
 }
 void deleteNode(Node* &head, int position){
    //deleting first node
    if(position==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        //deletion of middle node or last node
        Node* curr=head;
        Node* prev=NULL;

        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
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
    insertAtTail(tail, 14);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    deleteNode(head, 5);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    return 0;
}