#include<iostream>
#include "vector.h"
using namespace std;


int main(){

    //Size of a vector is the number of elements present in it.
    //Capacity of a vector is the number of elements the vector can store without expanding.
    //When size = capacity and we add one more element to the vector, it doubles its capacity by allocating itself to a new dynamic array.
    
    //Following creates vector of size 5 having elements with value 6.
    //Elements will start getting added after the 5th element and will not get added from the first element.
    //This happens when capacity is explicitly mentioned.
    //In case when capacity is implicitly increased i.e. when it gets doubled, the elements with push_back() will start getting added from the position where the last element was added.
    vector1<int> arr(5, 6);
    cout<<"Size and Capacity of the new vector:"<<endl;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    cout<<"Size and Capacity of the vector after elements are inserted:"<<endl;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    cout<<"The vector:"<<endl;
    for(int i = 0; i < arr.size(); i++){
        cout<<arr.at(i)<<",";
    }

    return 0;
}