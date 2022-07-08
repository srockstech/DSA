#include<bits/stdc++.h>
using namespace std;

int sum(vector<vector<int>> v, int sr, int sc, int er, int ec){
    int N = v.size();
    int M = v[0].size();
    
    vector<vector<int>> prefix(N, vector<int>(M));
    prefix[0][0] = v[0][0];
    for(int i = 1; i < N; i++){
        prefix[i][0] = prefix[i-1][0] + v[i][0];
    }
    for(int j = 1; j < M; j++){
        prefix[0][j] = prefix[0][j-1] + v[0][j];
    }
    for(int i = 1; i < N; i++){
        for(int j = 1; j < M; j++){
            prefix[i][j] = v[i][j] + prefix[i][j-1] + prefix[i-1][j] - prefix[i-1][j-1];
        }
    }
    int sum;
    if(sc == 0 && sr == 0){
        sum = prefix[er][ec];
    }
    else if(sc == 0){
        sum = prefix[er][ec] - prefix[sr-1][ec];
    }
    else if(sr == 0){
        sum = prefix[er][ec] - prefix[er][sc-1];
    }
    else{
        sum = prefix[er][ec] - prefix[sr-1][ec] - prefix[er][sc-1] + prefix[sr-1][sc-1];
    }
    return sum;
}

int main(){
    vector<vector<int>> v = {
        {1, 2, 3, 4, 6},
        {5, 3, 8, 1, 2},
        {4, 6, 7, 5, 5},
        {2, 4, 8, 9, 4},
    };
    cout<<sum(v, 0, 1, 3, 3);
    return 0;
}