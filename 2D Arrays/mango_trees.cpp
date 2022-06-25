#include<iostream>
#include<vector>
using namespace std;

pair<int, int> maxMangoTrees(vector<vector<char>> farm){
    pair<int, int> coordinates;
    int N = farm.size();
    int M = farm[0].size();
    int maximum = INT_MIN;
    int minimum;
    // TC: O(n^4)
    // for(int i = 0; i < N; i++){
    //     for(int j = 0; j < M; j++){
    //         int s1=0, s2=0, s3=0, s4=0;
    //         //S1
    //         for(int k = 0; k <= i; k++){
    //             for(int l = 0; l <= j; l++){
    //                 if(farm[k][l] == '#'){
    //                     s1++;
    //                 }
    //             }
    //         }
    //         //S2
    //         for(int k = 0; k <= i; k++){
    //             for(int l = j+1; l < M; l++){
    //                 if(farm[k][l] == '#'){
    //                     s2++;
    //                 }
    //             }
    //         }
    //         //S3
    //         for(int k = i+1; k < N; k++){
    //             for(int l = j+1; l < M; l++){
    //                 if(farm[k][l] == '#'){
    //                     s3++;
    //                 }
    //             }
    //         }
    //         //S4
    //         for(int k = i+1; k < N; k++){
    //             for(int l = 0; l <= j; l++){
    //                 if(farm[k][l] == '#'){
    //                     s4++;
    //                 }
    //             }
    //         }
    //         if(s1 <= s2 && s1 <= s3 && s1 <= s4){
    //             minimum = s1;
    //         }
    //         else if(s2 <= s1 && s2 <= s3 && s2 <= s4){
    //             minimum = s2;
    //         }
    //         else if(s3 <= s1 && s3 <= s2 && s3 <= s4){
    //             minimum = s3;
    //         }
    //         else{
    //             minimum = s4;
    //         }
    //         if(minimum > maximum){
    //             maximum = minimum;
    //             coordinates.first = i;
    //             coordinates.second = j;
    //         }
    //     }
    // }

    //TC: O(n^2):
    vector<vector<char>> prefix;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            sum += farm[i][j];
            prefix.push_back(sum);
        }
    }
    return coordinates;
}

int main(){
    vector<vector<char>> farm;
    int N, M;
    cout<<"Enter length: ";
    cin>>N;
    cout<<"Enter breadth: ";
    cin>>M;
    cout<<"Draw the field with # and . ('#' = mango tree, '.' = Empty space):\n";
    for(int i = 0; i < N; i++){
        vector<char> line(M);
        for(int j = 0; j < M; j++){
            cin>>line[j];
        }
        farm.push_back(line);
    }
    // cout<<endl;
    // for(int i = 0; i < N; i++){
    //     for(int j = 0; j < M; j++){
    //         cout<<farm[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<maxMangoTrees(farm).first<<" ";
    cout<<maxMangoTrees(farm).second;
    return 0;

}