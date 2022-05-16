#include<iostream>
using namespace std;

//We can skip no. of rows constrain when the array is declared as a formal parameter
//But the no. of columns should be same as the array to be passed in the actual parameters
void print(int a[][100], int r, int c){
    
    //###
    //Output
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    //Declaration
    //size depends on the constrains
    int arr[100][100];

    //Initializing - the constrain for no. of rows can be left empty but no. of columns is mandatory to be mentioned
    //If we will not use the nested brackets, the elements will be stored in the squence in which the array is sotred in the memory
    int matrix[][10] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
    };

    //###
    //Input
    //first input no. of rows and columns 
    int n, m;
    cin>>n>>m;

    //then the elements
    // Row major - filling a row first, then moving to another row for input
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }

    //Column major - filling a column first, then moving to another column for input
    // for(int j = 0; j < m; j++){
    //     for(int i = 0; i < n; i++){
    //         cin>>arr[i][j];
    //     }
    // }

    //###
    //Passing an array as a parameter
    //2D array are also passed like 1D arrays
    //They are passed by reference and their name represents the address of their first element which can also be written as &arr[0].
    print(arr, n, m);  

    return 0;
}