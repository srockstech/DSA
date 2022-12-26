#include<iostream>
#include<vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
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

int main(){
    vector<vector<int>> matrix = {
        {0,1,2,0},
        {3,4,5,2},
        {1,3,1,5},
    };

    setZeroes(matrix);

    for(int i = 0 ; i < matrix.size(); i++){
        for(int number: matrix[i]){
            cout<<number<<" ";
        }
        cout<<endl;
    }
}