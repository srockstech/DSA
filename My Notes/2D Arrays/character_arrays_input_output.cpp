#include <iostream>
#include <cstring>
using namespace std;

int main(){
    //Declaration
    char s[10][10];

    //Initialization - Can skip no. of rows
    char str[][10] = {
        "Apple",
        "Mango",
        "Banana",
        "Orange",
        "Papaya",
        "Grapes",
    };

    int n = 5; //no. of rows

    //Input
    for(int i = 0; i < 5; i++){
        gets(s[i]); //here, we can use the methods which are used to take input in a 1D character array
    }

    //Output
    for(int i = 0; i < n; i++){
        cout<<s[i]<<endl;
    }

    //Length of strings and no. of rows can be printed as follows:
    cout<<"Length of string at 2nd index/row: "<<strlen(str[2])<<endl;
    cout<<"No. of rows are: "<<sizeof(str)/sizeof(str[0])<<endl;
    //sizeof(str) gives the total no. of characters the array can store (10 * 6 = 60 here)
    //sizeof(str[0]) gives the no. of columns constrain (length of each string).

    return 0;
}