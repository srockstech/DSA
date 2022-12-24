#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool mypredicate(int a, int b){
    return (a == b*2); // setting a custom comparision i.e., the elements of the subarray in the vector should be double the elements of the key subarray.
}

int main(){
    vector<int> arr = {10,11,2,3,4,6,8,6,7,8};
    int key = 4;

    //algorithm library has find() and search() functions for searching an element and a subarray respectively in a vector.
    //These functions return an iterator which has a data type of vector<int>::iterator.
    //They need the address of first element and address of the element one position after the last element of the vector.
    //arr.begin() returns the iterator pointing to the first element while arr.end() returns the iterator pointing to the element after the last element of the vector.
    //If the element or the sub-array is found, find() and search() return the iterator pointing to that element or subarray respectively.
    //If not found, they return the iterator pointing to the element after the last element of the vector.
    //Subtracting arr.begin() from the iterator returned by find() or search() gives the result in the form of index.
    //if the element or sub-array is found, it1 - arr.begin() will give the index of that element or the first element of the sub-array otherwise it will return the index of the element after the last element of the vector (It will be equal to the size of the vector).

    //find() function (uses linear search):
    vector<int>::iterator it1 = find(arr.begin(), arr.end(), key);
    if(it1-arr.begin() == arr.size()){
        cout<<"Element not found.";
    }
    else{
        cout<<"Element found at index "<<it1-arr.begin()<<endl;
    }

    //search() function (using default comparison):
    int keySubarray[] = {2,3,4}; //can be a vector instead
    vector<int>::iterator it2 = search(arr.begin(), arr.end(), keySubarray, keySubarray+3);
    
    if(it2-arr.begin() == arr.size()){
        cout<<"Sub-array not found.";
    }
    else{
        cout<<"Sub-array found at index "<<it2-arr.begin()<<endl;
    }

    //search() function (using predicate comparison):
    vector<int>::iterator it3 = search(arr.begin(), arr.end(), keySubarray, keySubarray+3, mypredicate);
    
    if(it3-arr.begin() == arr.size()){
        cout<<"Sub-array with intended relation with the key Sub-array not found.";
    }
    else{
        cout<<"Sub-array with intended relation with the key Sub-array found at index "<<it3-arr.begin()<<endl;
    }


    return 0;
}