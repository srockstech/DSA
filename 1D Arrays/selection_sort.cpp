#include<iostream>
#include<vector>
using namespace std;

//Time Complexity = O(n^2)
void sel_sort(vector<int> &nums){
    int n = nums.size();
    int min = 0;
    for(int i = 0; i <= n-2; i++){
        for(int j = i; j <= n-1; j++){
            if(nums[min] > nums[j]){
                min = j;
            }
        }
        swap(nums[min], nums[i]);
    }
}

int main(){
    vector<int> nums = {-2,3,4,-1,5,-12,6,1,3};
    sel_sort(nums);
    for(int i = 0; i < nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}