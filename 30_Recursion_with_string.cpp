#include<iostream>
using namespace std;

// void reverse(string& str, int i, int j) {
//    cout<<"call received for str "<<str<<endl;
//  //base case
//     if(i>j){
//       return;
//     }
    
//     swap(str[i], str[j]);
//     i++;
//     j--;

//   //recursive call
//   reverse(str, i, j);
// }
// int main(){
//    string name="shakti";
//    cout<<endl;
//    reverse(name, 0, name.length()-1);
//    cout<<endl;
//   // cout<<name;
//    return 0;
// }

// bool checkPalindron(string str, int i, int j){
//   //base case
//   if(i>j){
//     return true;
//   }

//   if(str[i]!=str[j]){
//     return false;
//   }
//   else{
//     return checkPalindron(str, i+1, j-1);
//   }

// }
// int main(){
//   string name="abba";
//   bool isPalindron= checkPalindron(name, 0, name.length()-1);
//   cout<<endl;
//   if(isPalindron){
//     cout<<name<<"  is a palindrome"<<endl;
//   }
//   else{
//     cout<<name<<" is not palindrome"<<endl;
//   }
//   return 0;
// }




int power(int a, int b){

  //base case
  if(b==0){
    return 1;
  }
  if(b==1){
    return a;
  }
   int ans= power(a, b/2);
  //if b is even
  if(b%2==0){
   return ans*ans;
  }
  else{
    return a*ans*ans;
  }
}
int main(){
  int a, b;
  cin>>a>>b;

  int ans= power(a,b);
  cout<<"answer is"<<ans<<endl; 
  return 0;
}