#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//1st Approach: By taking another matrix (TC: O(N^2), SC: O(N^2))
vector<vector<int>> rotate_approach_1st(vector<vector<int>> matrix){
    int n = matrix.size();

    //We declare a 2d vector with predefined size as follows:
    vector<vector<int>> rotated_matrix(n, vector<int>(n));
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            rotated_matrix[j][n-i-1] = matrix[i][j];
        }
    }

    return rotated_matrix;
}

//2nd Approach: By reversing and transposing on the main diagonal (TC: O(N^2), SC: O(1))
void rotate_approach_2nd(vector<vector<int>>& matrix) {
        
        reverse(matrix.begin(), matrix.end());
        
        for(int i = 0; i < matrix.size(); i++){ //0 
            for(int j = i+1; j < matrix[i].size(); j++){ //1 2
                swap(matrix[i][j], matrix[j][i]);
            }
        }
}

int main(){
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    int n = matrix.size();
    vector<vector<int>> rotated_matrix = rotate_approach_1st(matrix);
    rotate_approach_2nd(matrix);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}