#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> printPascal(int n)
{
    vector<vector<int>> pascal;
        
        for(int i = 0; i < n; i++){
            vector<int> row;
            for(int j = 0; j < i+1; j++){
                if(j == 0 || j == i){
                    row.push_back(1);
                }
                else{
                    row.push_back(pascal[i-1][j] + pascal[i-1][j-1]);
                }
            }
            pascal.push_back(row);
        }
        return pascal;
}

int main(){
    vector<vector<int>> pascal = printPascal(6);
    int N = pascal.size();
    int M = pascal[0].size();
    for(int i = 0; i < N; i++){
        for(int j = 0; j < i+1; j++){
            cout<<pascal[i][j];
        }
        cout<<endl;
    }
    return 0;
}