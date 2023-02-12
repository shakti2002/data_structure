#include<iostream>
#include<stack>
using namespace std;

class Stack{
  public:
  int *arr;
  int  top;
  int size;

  Stack(int size){
    //constructor
    this->size=size;

    //dyinamic array
    arr= new int[size];
    top=-1;
  }
  
  void push(int element){
    if(size-top >1){
      top++;
      arr[top]=element;
    }
    else{
        cout<<"stack Overflow"<<endl;
    }
  }

  void pop(int element ){
   if(top>=0){
    top--;
   }
   else{
    cout<<"stack is underflow"<<endl;
   }
  }

  int peek(){
    if(top>=0){
   return arr[top];
    }
    else{
        cout<<"stack is empty"<<endl; 
        return -1;
    }
}

  bool isEmpty(){
   if(top==-1){
    return true;
   }
   else{
    return false;
   }
  }
};

int main(){

    Stack s(5);

    s.push(23);
    s.push(43);
    s.push(84);
    s.push(9);
    s.push(90);
    s.push(34);

    cout<<s.peek()<<endl;

    s.pop(84);
    cout<<s.peek()<<endl;

    s.pop(43);
    cout<<s.peek()<<endl;

    s.pop(23);
    cout<<s.peek()<<endl;

    if(s.isEmpty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty";
    }

   /*/ stack<int>s;
  
    //push
    s.push(23);
    s.push(63);
    s.push(54);

    //pop
    s.pop();
    cout<<s.top()<<endl;

    if(s.empty()){
        cout<<"stack is empty";
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    cout<<"size of stack"<<s.size(); */
}