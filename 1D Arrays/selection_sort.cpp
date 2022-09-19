#include<iostream>
#include<vector>
using namespace std;

//Time Complexity = O(n^2)
void sel_sort(vector<int> &nums){
    int n = nums.size();
    
    for(int i = 0; i <= n-2; i++){
        int min = i;
        for(int j = i; j <= n-1; j++){
            if(nums[min] > nums[j]){
                min = j;
            }
        }
        swap(nums[min], nums[i]);
    }
}

int main(){
    vector<int> nums = {3,64,54,64,6,6,6,8};
    sel_sort(nums);

    cout<<"Sorted Array is:"<<endl;
    for(int i = 0; i < nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}