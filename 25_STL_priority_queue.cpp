#include<iostream>
#include<queue>
using namespace std;

int main()
   {
    //max heap
    priority_queue<int>maxi;
    // min heap
    priority_queue<int, vector<int>, greater<int> >mini;
    

    maxi.push(2);
    maxi.push(1);
    maxi.push(0);
    maxi.push(4);
    
    cout<<"maxi size->"<<maxi.size()<<" "<<endl;
    
    for(int i=0; i< maxi.size(); i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(2);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    
    cout<<"mini size->"<<mini.size()<<" "<<endl;
    
    for(int i=0; i< mini.size(); i++){
        cout<<mini.top()<<" ";
        mini.pop();
        mini.pop();
        mini.pop();
        mini.pop();
    }
    cout<<endl;

    cout<<"empty or not"<<mini.empty()<<endl;
   }
   

