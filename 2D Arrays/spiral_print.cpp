#include <iostream>
using namespace std;

void spiralPrint(int a[][10], int n, int m){
    int strCol = 0;
    int strRow = 0;
    int endCol = m - 1;
    int endRow = n -1;

    while(strCol <= endCol || strRow <= endRow){
        //Printing first row
        for(int col = strCol; col <= endCol; col++){
            cout<<a[strRow][col]<<" ";
        }
        //Printing last col
        for(int row = strRow+1; row <= endRow; row++){
            cout<<a[row][endCol]<<" ";
        }
        //Printing last row
        for(int col = endCol-1; col >= strCol; col--){
            if(strRow == endRow){
                break;
            }
            cout<<a[endRow][col]<<" ";
        }
        //Printing first col
        for(int row = endRow-1; row >= strRow+1; row--){
            if(strCol == endCol){
                break;
            }
            cout<<a[row][strCol]<<" ";
        }

        strCol++;
        strRow++;
        endCol--;
        endRow--;
    }
}

int main(){
    int arr[][10] = {
        {1, 2, 3, 4},
        {12, 13, 14, 5},
        {11, 16, 15, 6},
        {10, 9, 8, 7}
    };

    int n, m;
    n = 4;
    m = 4;

    spiralPrint(arr, n, m);

    return 0;
}