#include<iostream>
using namespace std;

int main(){
    //creating a dynamic 1D array
    int* a = new int[10];
    for(int i = 0; i < 10; i++){
        a[i] = i;
    }
    for(int i = 0; i < 10; i++){
        cout<<a[i];
    }
    cout<<endl;

    //Freeing up the memory to prevent memory leak (wastage of memory) - very critical
    delete []a;
    return 0;
}