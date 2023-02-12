#include<iostream>
using namespace std;

int partation(int arr[], int s, int e){
   
   int pivot= arr[s];

   int cnt=0;
   for(int i=s+1; i<=e; i++){
   if(arr[i]<=pivot){
    cnt++;
   }
   }
   //place pivot at rigth position
   int pivotIndex=s+cnt;
   swap(arr[pivotIndex], arr[s]);
   
   //left and right wala part
   int i=s, j=e;

   while(i< pivotIndex && j>pivotIndex){
    while (arr[i]<pivot)
    {
        i++;
    }
    while(arr[j]>pivot){
        j--;
    }
    if(arr[i]<pivotIndex && arr[j]>pivotIndex){
        swap(arr[i++], arr[j--]);
    }
    
   }
   return pivotIndex;
}


void quickSort(int arr[], int s, int e){
    //base case 
    if(s>=e){
        return ;
    }

    //partition
    int p=partation(arr, s, e);
    //left side
    quickSort(arr, s, p-1);

    //right side
    quickSort(arr, p+1, e);
}
int main(){
    int arr[6]={2,5,8,9,6,1};
    int n=6;
    
    quickSort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}