#include <iostream>
using namespace std;

int linear_search(int arr[], int N, int key){
    for(int i = 0; i < N; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2,47,21,43,84,18,3,1,78,5};
    int size = sizeof(arr)/sizeof(int);
    int key, index;
    cin>>key;
    index = linear_search(arr, size, key);
    if(index != -1){
        cout<<key<<" found at index "<<index;
    }
    else{
        cout<<key<<" not found.";
    }
    return 0;
}