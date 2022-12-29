#include<iostream>
using namespace std;

//Find if a given a number is power of 2 or not.
int main(){
	int n;
	cin>>n;

	//Property:
	//If a numner 'n' is a power a power of 2, n & (n-1) = 0
	//Ex: 16 = 10000 and 15 = 01111. 16 & 15 = 00000 = 0
	if( (n & (n-1))==0){
		cout<<"Power of 2";
	}
	else{
		cout<<"Not a power of 2";
	}
	return 0;
}