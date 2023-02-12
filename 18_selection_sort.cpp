#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>& nums ){
     
     for(int i=0; i<nums.size()-1; i++){
        int minIndex= i;
        for(int j=i+1; j<nums.size(); j++){
            if(nums[j]<nums[minIndex])
          minIndex=j;
        }
        swap(nums[minIndex],nums[i]); 
     }
     for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";}
//     for(int ele: nums){
//     cout<<ele<<" ";
// }
}
int main(){
  vector<int>nums={34,23,78,4,6,9,20};
  selectionSort(nums);
  return 0;

}