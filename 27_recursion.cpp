#include<iostream>
using namespace std;

// int factorial(int n){
//     if(n==0)
//        return 1;

//        int smallerProblem= factorial(n-1);
//        int biggerProblem= n*smallerProblem;

//        return biggerProblem; 
// }
//    int main(){
//       int n;
//       cin>>n;
//       int ans=factorial(n);
//       cout<<ans<<endl;
//       return 0;
//    }



// void reachHome(int src, int des){
//     cout<<"source"<<src<<endl;
//     //base case
//     if(src==des){
//     cout<<"pahunch gaya"<<endl;
//     return;
//     }
//     //processing -ek step aage badh jao
//     src++;

//     //recursive call
//     reachHome(src, des);
// }

// int main(){
//     int des=10;
//     int src=1;

//     cout<<endl;
//     reachHome(src, des);
// }


// int fibonacci(int n){
//     if(n==0)
//     return 0;
//     if(n==1)
//     return 1;

//     int ans= fibonacci(n-1)+ fibonacci(n-2);
//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;
//     int ans= fibonacci(n);
//     cout<<ans<<endl;
//     return 0;
//}



// int  climbStairs(int n){
//     if(n<0)
//        return 0;
//     if(n==0)
//        return 1;
//        int ans= climbStairs(n-1)+ climbStairs(n-2);
//        return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans=climbStairs(n);
//     cout<<ans<<endl;
//     return 0;
// }

void sayDigit(int n, string arr[]){
    if(n==0)
      return;

   //recursivs call
   int digit= n%10;
    n=n/10;

    //processing
    sayDigit(n ,arr);
   cout<<arr[digit]<<" ";

}
int main(){

    string arr[10]= {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout<<endl;
    int n;
    cin>>n;
    cout<<endl;
    sayDigit(n ,arr);
    return 0;
}