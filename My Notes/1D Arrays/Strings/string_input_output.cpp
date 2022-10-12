#include <iostream>
using namespace std;

int main(){
    //###
    // strings can be initialized in the following ways:
    // string str = "Apple";
    // string str("Apple"); //passing value to the constructor
    // string str = {'A','p','p','l','e','\0'};
    string str;

    //###
    //Input can be taken in following ways:
    //1.Using getline() function
    //third parameter is optional and signifies the delimiter.
    //getline(cin, str, '.');

    //###
    //2.If the string is not initialized, we cannot directly assign characters to the string like str[i] = 'a'.
    //We need to either use push_back() function of string class to add a character to the end of the string.
    //parameter cannot be a string.
    //str.push_back('a');

    //3.We can also use + operator to add a character or a another string.
    // str = str + 'a';
    // str = str + "apple";

    //4.Using append function
    //parameter cannot be a character enclosed in single quotes.
    // str.append("a");

    //5.To insert a character at a particular index. 
    //First argument is the index, second is the number of times the character is to be inserted starting from the mentioned index.
    //All the indices before the mentioned index must have been initialized.
    str.insert(0, 1, 'a');
    str.insert(1, 1, 'p');
    str.insert(2, 2, 'p');
    cout<<str;
    return 0;
}