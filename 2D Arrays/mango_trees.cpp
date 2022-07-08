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
    //Building the 2D prefix sum matrix
    vector<vector<int>> prefix(N, vector<int> (M));
    //For the first element of the prefix matrix
    if(farm[0][0] == '#'){
        prefix[0][0] = 1;
    }
    else{
        prefix[0][0] = 0;
    }

    //for leftmost column
    for(int i = 1; i < N; i++){
        if(farm[i][0] == '#'){
            prefix[i][0] = prefix[i-1][0] + 1;
        }
        else{
            prefix[i][0] = prefix[i-1][0];
        }
    }

    //for topmost row
    for(int j = 1; j < M; j++){
        if(farm[0][j] == '#'){
            prefix[0][j] = prefix[0][j-1] + 1;
        }
        else{
            prefix[0][j] = prefix[0][j-1];
        }
    }

    //for rest of the matrix
    for(int i = 1; i < N; i++){
        for(int j = 1; j < M; j++){
            if(farm[i][j] == '#'){
                prefix[i][j] = 1 + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
            }
            else{
                prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
            }
        }
    }
    
    //Uncomment this to view the prefix sum matrix
    // for(int i = 0; i < N; i++){
    //     for(int j = 0; j < M; j++){
    //         cout<<prefix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //finding the coordinates of the cut which will maximize rahul's share
    int s1, s2, s3, s4;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){        
            int s1, s2, s3, s4;
            //calulating the 4 sums
            s1 = prefix[i][j];
            s2 = prefix[i][M-1] - s1;
            s3 = prefix[N-1][j] - s1;
            s4 = prefix[N-1][M-1] - (s1 + s2 + s3);

            if(s1 <= s2 && s1 <= s3 && s1 <= s4){
                minimum = s1;
            }
            else if(s2 <= s1 && s2 <= s3 && s2 <= s4){
                minimum = s2;
            }
            else if(s3 <= s1 && s3 <= s2 && s3 <= s4){
                minimum = s3;
            }
            else{
                minimum = s4;
            }
            if(minimum > maximum){
                maximum = minimum;
                coordinates.first = i;
                coordinates.second = j;
            }
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
    cout<<endl;

//Sample Input
// .##...
// #..##.
// .#....
// .##..#
// #..##.
// .#....

//Sample Output
// 2 1

    //Uncomment this to view the input matrix
    // for(int i = 0; i < N; i++){
    //     for(int j = 0; j < M; j++){
    //         cout<<farm[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    cout<<maxMangoTrees(farm).first<<" ";
    cout<<maxMangoTrees(farm).second;
    maxMangoTrees(farm);
    return 0;
}