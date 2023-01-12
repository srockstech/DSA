#include<iostream>
#include<list>
using namespace std;

int main(){
    //Using list header file from STL, we can declare a doubly linked list.
    //Declaring an empty list:
    list<int> arr2;

    //Initializing a list after declaration:
    arr2 = {2,6,7,3,7};

    //Initializing a list with different elements during declaration:
    list<int> arr = {5,2,6,7,2,6};

    //Another way of initializing a list with different elements during declaration:
    list<int> arr3{8,5,3,5,2,6};

    //Initializing a list with 6 elements having same value '0':
    list<int> arr4(6);

    //Initializing a list with 6 elements having same value '8':
    list<int> arr1(6, 8);
    
    //printing size of a list:
    cout<<arr1.size()<<endl;

    //resizing a list (If size increases, new elements have value '0'. If size reduces, elements from the right get removed and rest retain their value):
    arr1.resize(8);
    cout<<arr1.size()<<endl;
    
    //Printing the element at index 2 in the list:
    list<int>::iterator it = arr2.begin();
    advance(it, 2); //move iterator to the right by 2. We can't do *(it+2).
    cout<<*it<<endl;

    //Printing all elements of a list
    for(auto it : arr1){
        cout<<it<<" ";
    }
    return 0;
}