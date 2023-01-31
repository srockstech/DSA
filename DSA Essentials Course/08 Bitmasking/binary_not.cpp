#include<iostream>
using namespace std;

int main(){

	unsigned int x = 5; //0000....28 Zeros....0101
	int y = 5; //0000....28 Zeros....0101
	cout << (~x) <<endl;  //1111....29 1s....010 = 4294967290
	cout << (~y);   //1111....29 1s....010 = -6

	//Difference is due to the fact that we take 2s complement to find the magnitude of a negative signed number.  
	//And ~y gives 1111....29 1s....010 which will be considered negative since it is signed and has the most significant bit as 1.
	//While ~x, since it is unsigned, is not negative and hence 1111....29 1s....010 will be directly converted to decimal giving 4294967290 as the answer.

	return 0;
}