#include<iostream>
#include<vector>
using namespace std;

//Time Complexity = O(n^2)
void bub_sort(vector<int> &nums){
    int n = nums.size();
    for(int i = 1; i <= n-1; i++){
        for(int j = 0; j <= n-i-1; j++){
            if(nums[j] > nums[j+1]){
                swap(nums[j], nums[j+1]);
            }
        }
    }
}

//Time Complexity in best case (when the array is already sorted) = O(n)
void bub_sort_opt(vector<int> &nums){
    int n = nums.size();
    bool swapped;
    for(int i = 1; i <= n-1; i++){
        swapped = false;
        for(int j = 0; j <= n-i-1; j++){
            if(nums[j] > nums[j+1]){
                swap(nums[j], nums[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}

int main(){
    vector<int> nums = {-2,3,4,-1,5,-12,6,1,3};
    bub_sort_opt(nums);
    for(int i = 0; i < nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}