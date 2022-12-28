#include<iostream>
using namespace std;

int main(){

	int x;
	cin>>x;

	//If last bit of the number is 1, it will be odd. Otherwise, it will be even.
	//If we do & operation with 1, that last bit will be 1 if the result is 1. Otherwise, it will be 0.
	if(x&1){
		cout<<"Odd";
	}
	else{
		cout<<"Even";
	}
	return 0;
}