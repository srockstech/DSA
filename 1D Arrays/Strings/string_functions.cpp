#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string b = "hello";

    //###
    //getting no. of characters in the string
    //both of the following give the same result
    //cout<<b.size();
    //cout<<b.length();

    //###
    //reversing a string
    // reverse(b.begin(), b.end());

    //###
    //removing all the elements of the string
    //both of the following does the same thing.
    //size/length becomes 0
    // b.clear();
    // b.erase();

    //###
    //removing a character from a particular index (2 here)
    // b.erase(b.begin() + 2);

    //###
    //removing a character from the end of the string
    b.pop_back();
    
    cout<<b<<endl;
    cout<<b.size()<<endl;
    cout<<b.length()<<endl;
    return 0;
}