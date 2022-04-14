#include<iostream>
#include<vector>
using namespace std;

//Time Comlexity = O(N^2)
void in_sort(vector<int> &nums){
    int n = nums.size();
    int current, prev;
    for(int i = 1; i <= n-1; i++){
        current = nums[i];
        prev = i-1;
        while(prev >= 0 && nums[prev] > current){
            nums[prev + 1] = nums[prev];
            prev--;
        }
        nums[prev + 1] = current;
    }
}

int main(){
    vector<int> nums = {-2,3,4,-1,5,-12,6,1,3};
    in_sort(nums);
    for(int i = 0; i < nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}