#include<iostream>
using namespace std;


// bool isSorted(int arr[], int size){
//     if(size==0 || size==1){
//     return true;
//     }
    
//    if( arr[0]>arr[1]){

//    return false;
//    }
//    else{
//    bool ans= isSorted(arr+1, size-1);
//    return ans;
//    }

// }
// int main(){
//    int arr[5]= {2,4,6,9,10};
//    int size=5;
//    bool ans= isSorted(arr, size);

//    if(ans){
//       cout<<"array is shorted"<<endl;
//    }
//    else{
//       cout<<"array is not sorted"<<endl;
//    }
// }




// int getSum(int arr[], int size){
// if(size==0){
//    return 1;
// }
// if(size==1){
//    return arr[0];
// }
//    int remainingPart= getSum(arr+1, size-1);
//    int sum= arr[0]+ remainingPart;
//    return sum;
// }

// int main(){
//    int arr[6]={};
//    int size= 6;

//    int sum = getSum(arr, size);
//    cout<<"sum is"<< sum <<endl;
//    return 0;
// }


bool linerSearch(int arr[], int size, int k){
if(size==0){
   return false;
}
if(arr[0]=k){
   return true;
}
   bool remainingPart= linerSearch(arr+1, size-1, k);
   return remainingPart;
}

int main(){
   int arr[6]={4,2,5,7,9,8};
   int size= 6;
   int k= 10;
   bool ans = (arr, size, k);
   if(ans==k){
   cout<<k<<"is present"<<endl;
   }
   else{
      cout<<k<<"is not present"<<endl;
   }
   return 0;
}

