#include <iostream>
using namespace std;

void print_subarrays(int arr[], int N){
    for(int i = 0; i < N; i++){
        for(int j = i; j < N; j++){
            for(int k = i; k <= j; k++){
                cout<<arr[k]<<",";
            }
            cout<<endl;
        }
    }
}

//Time complexity = O(N*N*N) = O(N^3) since there are three nested loops

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int N = sizeof(arr)/sizeof(int);
    print_subarrays(arr, N);
    
    return 0;
}

