#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        int pointerRow = 0;
        int pointerColumn = c-1;
        while(pointerRow < r && pointerColumn >= 0){
            if(target > matrix[pointerRow][pointerColumn]){
                pointerRow++;
            }
            else if(target < matrix[pointerRow][pointerColumn]){
                pointerColumn--;
            }
            else{
                return true;
            }
        }
        return false;
    }

int main(){
    vector<vector<int>> matrix = {
        {1, 3, 5 ,7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 60;


    cout<<searchMatrix(matrix, target);
    return 0;
}