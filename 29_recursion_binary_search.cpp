#include<iostream>
using namespace std;


void print(int arr[], int s, int e){
   for(int i=s; i<=e; i++){
    cout<<arr[i]<<" ";
   
   }
}

bool binarySearch(int *arr, int s, int e, int k){

    print(arr, s, e);
    //base search
    if(s>e){
        return false;
    }

    int mid= (s+e)/2;
    cout<<endl;
    cout<<"value at mid arr is "<<arr[mid]<<" ";
    cout<<endl;
    //element found
    if(arr[mid]==k){
        return true;
    }

    if(arr[mid]<k){
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }
}

int main(){
    int arr[6]= {3,4,5,6,7,18};
    int size= 6;
    int key= 18;

    cout<<"present or not "<<binarySearch(arr, 0, 5, key)<<endl;
}