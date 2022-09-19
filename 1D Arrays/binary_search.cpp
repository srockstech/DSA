#include <iostream>
using namespace std;

int binary_search(int arr[], int N, int key){
    int s = 0;
    int e = N-1;
    int mid;
    while(s<=e){    
        mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 89};
    int N = sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;
    int result = binary_search(arr, N, key);
    if(result != -1){
        cout<<key<<" is present at index "<<result;
    }
    else{
        cout<<key<<" not found!";
    }
    return 0;
}