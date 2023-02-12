#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &nums){
    for(int i=1; i<nums.size(); i++){
        int temp= nums[i];
        int j=i-1;
        for(; j>=0; j--){
            if(nums[j]>temp){
                nums[j+1]=nums[j];
            }
            else{
                break;
            }
            
        }
        nums[j+1]=temp;
    }
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
        }
}
int main(){
    vector<int>nums={3,8,4,6,7,1,2};
    insertionSort(nums);
    return 0;
}