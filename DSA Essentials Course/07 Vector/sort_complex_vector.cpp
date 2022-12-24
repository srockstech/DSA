//Sorting a complex vector using sort() function of algorithm library
//Sort the vector that contains names and marks of students based on the sum of marks of each student in descending order.

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

//function to calculate marks
int calculate_total(vector<int> marks){
    return marks[0] + marks[1] + marks[2];
}

//comparator function
bool compare(pair<string, vector<int>> s1, pair<string, vector<int>> s2){
    return calculate_total(s1.second) > calculate_total(s2.second);
}

int main(){
    vector<pair<string, vector<int>>> student_marks = {
        {"Rohan", {10, 20, 11}},
        {"Prateek", {10, 21, 3}},
        {"Vivek", {4, 5, 6}},
        {"Rijul", {10, 13, 20}}
    };

    sort(student_marks.begin(), student_marks.end(), compare);

    for(pair<string, vector<int>> i : student_marks){
        cout<<i.first<<" "<<calculate_total(i.second)<<endl;
    }
}