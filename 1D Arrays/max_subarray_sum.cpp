#include <iostream>
using namespace std;

//1. Brute Force I
//Time complexity = O(N*N*N) = O(N^3) 
//since there are three nested loops.
void maxSubarraySum1(int arr[], int N){
    int sum;
    int max_sum = INT_MIN;
    for(int i = 0; i < N; i++){
        for(int j = i; j < N; j++){
            sum = 0;
            for(int k = i; k <= j; k++){
                sum += arr[k];
            }
            cout<<sum;
            if(max_sum < sum){
                max_sum = sum;
            }
            cout<<endl;
        }
    }
    cout<<"Maximum subarray sum = "<<max_sum;
}

//1. Brute Force II
//Time complexity = O(N*N) = O(N^2) 
//since there are two nested loops.
void maxSubarraySum2(int arr[], int N){
    int sum;
    int max_sum = INT_MIN;
    for(int i = 0; i < N; i++){
        sum = 0;
        for(int j = i; j < N; j++){
            sum += arr[j]; 
            if(sum > max_sum){
                max_sum = sum;
            }
        }
    }
    cout<<"Maximum subarray sum = "<<max_sum;
}

//3. Prefix Sum
//Time complexity  = O(N^2)
void maxSubarraySum3(int arr[], int N){
    int prefix[100] = {0};
    prefix[0] = arr[0];
    int sum;
    int max_sum = INT_MIN;
    for(int i = 1; i < N; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    //prefix[] = {-2, 1, 5, 4, 9, -3, 3, 4, 7}

    for(int i = 0; i < N; i++){
        for(int j = i; j < N; j++){
            sum = (i > 0) ? prefix[j] - prefix[i-1] : prefix[j];
            if(max_sum < sum){
                max_sum = sum;
            }
        }
    }
    cout<<"Maximum subarray sum = "<<max_sum;
}

//4. Kadane's Algorithm
//Time Complexity = O(N)
void maxSubarraySum4(int arr[], int N){
    int sum = 0;
    int max_sum = 0;
    for(int i = 0; i < N; i++){
        sum = sum + arr[i];
        if(sum < 0){
            sum = 0;
        }
        max_sum = (max_sum < sum) ? sum : max_sum;
    }
    cout<<"Maximum subarray sum = "<<max_sum;
}

int main(){
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int N = sizeof(arr)/sizeof(int);
    maxSubarraySum2(arr, N);
    return 0;
}