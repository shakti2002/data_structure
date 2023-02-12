#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &nums){

    for(int i=1; i<nums.size(); i++){
        bool swaped=false;
        for(int j=0; j=nums.size()-i; j++){
            if(nums[j]>nums[j+1]){
              bool swaped=true; 
              swap(nums[j], nums[j+1]);
               
            }
        }
        if(swaped==false){
           break;
           }
    }
     for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
        }
}

int main(){
    vector<int>nums= {6,4, 8, 6, 5, 2};
    bubbleSort(nums);
    return 0;
}