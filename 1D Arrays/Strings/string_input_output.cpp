#include <iostream>
using namespace std;

int main(){
    char str[100];
    //###
    // 1.Using cin and cout (cin doesn't take space and characters after space)
    // cin>>str;
    // cout<<str;

    //###
    // taking character input using cin.get()
    // char temp = cin.get();

    //###
    // taking multiple characters using a loop.
    // char temp;
    // int len = -1;
    // while(temp != '#'){
    //     len++;
    //     cout<<temp;
    //     temp = cin.get();
    // }
    // cout<<len;
    //cin.get() reads from the input buffer.
    //buffer stops taking input when it encounters a '\n'
    //Once the buffer stops, cin.get() reads the characters in the buffer one by one.
    //When there are no characters left in the buffer to read, that iteration of the
    //cin.get() in the loop starts the input buffer again for input from the user.
    
    //###
    //Using cin.get() to take input in a char array.
    //Never use this method with string class variable.
    //A string class variable gets its size when it is initialized, it's size is zero when it is not initialized.
    //'\0' is put at the end of the character array manually when it is not initialized with a string literal.
    //This is done so that we can calculate the length of the string stored in the char array using loop.
    //Also so that if there is any character stored at an index greater than length of the string, it can be ignored.
    char temp = cin.get();
    int len = 0;
    while(temp != '\n'){
        str[len++] = temp;  
        temp = cin.get();
    }
    str[len] = '\0';
    cout<<str<<endl;
    cout<<"Length of the string is "<<len;
    return 0;
}