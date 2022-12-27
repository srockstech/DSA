#include<iostream>
#include<vector>
using namespace std;

//1st approach (When the elements of the array can only be positive elements (Ask the interviewer for the constraint)):
//TC: O(n*m*(n+m)), SC: O(1)
//Linearly traversing the matrix and running two loops to change row and column elements to a negative number if the element is zero.
//While changing the elements of row and column of the zero element, leave the element that is already 0 as zero, otherwise, its row and column will be affected.
//Then change all the negative elements to zero by traversing the array linearly again.
void setZeroes_1st_approach(vector<vector<int>>& matrix) {
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[i].size(); j++){
            if(matrix[i][j] == 0){
                for(int k = 0; k < matrix.size(); k++){
                    matrix[k][j] = (matrix[k][j] != 0) ? -1 : 0;
                }
                for(int k = 0; k < matrix[i].size(); k++){
                    matrix[i][k] = (matrix[i][k] != 0) ? -1 : 0;
                }
            }
        }
    }

    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[i].size(); j++){
            if(matrix[i][j] == -1){
                matrix[i][j] = 0;
            }      
        }
    }
}


//2nd Approach (When elements can be any of the real numbers | Better time complexity | worse space complexity): 
//Take two dummy 1D arrays, one for row and one for column.
//Linearly traverse the given array and if a zero is encountered, set those indices of the row and column dummy arrays to zero.
//Traverse the array again while making the elements zeros at index where either the column index or row index is zero in the dummy array.
void setZeroes_2nd_approach(vector<vector<int>>& matrix){
    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> rowDummy(n, 1);
    vector<int> columnDummy(m, 1);
        
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == 0){
                rowDummy[i] = 0;
                columnDummy[j] = 0;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(rowDummy[i] == 0 || columnDummy[j] == 0){
                matrix[i][j] = 0;
            }      
        }
    }
}

int main(){
    vector<vector<int>> matrix = {
        {0,-1,2,0},
        {3,4,-1,2},
        {1,3,1,5},
    };

    setZeroes_2nd_approach(matrix);

    for(int i = 0 ; i < matrix.size(); i++){
        for(int number: matrix[i]){
            cout<<number<<" ";
        }
        cout<<endl;
    }
}