#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constuctor
    Node(int data){
        this->data= data;
        this->next= NULL;
    }
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
    //deleting first or start node
    if(position==1){
        Node* temp= head;
        head=head->next;
    // memory free start node
     temp->next=NULL;
    delete temp;
    }
    else{
        //deletion of middle node or last node
        Node* curr=head;
        Node* prev= NULL;

        int cnt=1;
        while(cnt<position){
            prev= curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main(){
    Node* node1=new Node(10);

    Node* head=node1;
    Node* tail= node1;
    print(head);

    insertAtTail(tail,12);
    print(head);

    insertAtTail(tail,15);
    print(head);

    insertAtTail(tail,22);
    print(head);

    deleteNode(head, 4);
    print(head);

    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    return 0;
}