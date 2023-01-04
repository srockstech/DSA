#include<iostream>
using namespace std;

//Convert given decimal to binary. (given decimal is a positive integer)
int convertToBinary(int n){
	//Finding last bit (n&1 gives the last bit)
	//To convert 5 to decimal
	//binary = binary + lastbit * power
	//1 = 0 + 1 * 1
	//1 = 1 + 0 * 10
	//101 = 1 + 1 * 100
	//101 = n (5) in binary
	int binary = 0;
	int power = 1;
	while(n>0){
		binary += (n&1) * power;
		n = n>>1;
		power = power*10;
	}
	return binary;
}

int main(){
	int n;
	cin>>n;
	cout << convertToBinary(n) <<endl;
	return 0;
}