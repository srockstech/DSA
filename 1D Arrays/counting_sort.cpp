#include<iostream>
#include<vector>
using namespace std;


//works only in case of all positive elements
//Time Complexity: O(n+m) where n = no. of elements and m is the biggest element
void cnt_sort(vector<int> &nums){
    int n = nums.size();
    int maximum = INT_MIN;
    //Finding the biggest element
    for(int i = 0; i < n; i++){
        maximum = max(maximum, nums[i]);
    }
    vector<int> count(maximum+1, 0);
    //Building the count array
    for(int i = 0; i < n; i++){
        count[nums[i]]++;
    }
    int j = 0;
    for(int i = 0; i <= maximum; i++){
        while(count[i] > 0){
            nums[j] = i;
            count[i]--;
            j++;
        }
    }
}


int main(){
    vector<int> nums = {5,8,3,1,1,2,6};
    cnt_sort(nums);
    for(int i = 0; i < nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}