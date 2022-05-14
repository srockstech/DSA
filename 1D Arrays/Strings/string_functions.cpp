#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string a = "hello";
    string b = a;
    reverse(b.begin(), b.end());
    cout<<b<<endl;
    cout<<a<<endl;
    if(a == b){
        cout<<true;
    }
    else{
        cout<<false;
    }
    return 0;
}