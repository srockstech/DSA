#include <iostream>
#include <cstring> //header file to use the char array (C type strings)functions
#include <algorithm> //for reverse() function
using namespace std;

int main(){
    char a[100] = "apple";
    char b[100] = "mango";
    char c[100] = "www.";
    char d[100] = "srocks.tech";

    //char array length
    cout<<strlen(a)<<endl;
    
    //char array copy from one to another (copying a into b here after overriding b)
    strcpy(b, a);
    cout<<b<<endl;

    //compare two char arrays
    //returns 0 when they match
    //if not, returns (y - x) where y and x are first non-mathcing 
    //characters in the first and second char arrays respectively.
    //So, the result will be positive if y has a greater ASCII value and -ve if it has smaller ASCII value.
    cout<<strcmp(a, c)<<endl; 

    //concatenates (adds) the second char array into the first
    strcat(c, d);
    cout<<c<<endl;

    //reversing a char array using reverse() function of "algorithm" file
    reverse(a, a + strlen(a));
    cout<<a;
    return 0;
}