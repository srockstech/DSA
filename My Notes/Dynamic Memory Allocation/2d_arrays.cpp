#include <iostream>
using namespace std;
int** create2DArray(int r, int c){
    int** arr = new int*[r];
    for(int i = 0; i < r; i++){
        arr[i] = new int[c];
    }
    return arr;
}

int main(){
    int rows, cols;
    cin>>rows>>cols;
    int** arr = create2DArray(rows, cols);
    int value = 1;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            arr[i][j] = value;
            value++;
        }
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}