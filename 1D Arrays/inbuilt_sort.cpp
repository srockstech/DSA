#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//comparator
bool compare(int a, int b){
    return a > b;
}

//Time Complexity = O(nLog(n))
int main(){
    int nums[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = 9;
    // sort(nums, nums + n); //sorting in ascending order
    // reverse(nums, nums + n); //reversing to make it in descending order
    
    // sort(nums, nums + n, compare); //sorting in descending using comparator function
    //This is not a call to compare function
    //We are passing this function as a parameter
    //so that the sort() function can call it

    // sort(nums.begin(), nums.end(), greater<int>()); //vectors can be sorted like this
    
    sort(nums, nums + n, greater<int>()); //sorting in descending using inbuilt comparator
   
    for(int i = 0; i < n; i++){
        cout<<nums[i]<<" ";
    }
}