#include<iostream>
using namespace std;

int fib(int n){
	//base case
	//Here there will be two base cases since if n = 1, we are not going to call fib(0) and fib(-1).
	if(n==0 or n==1){
		return n;
	}
	//recursive case
	return fib(n-1) + fib(n-2);
}

int main(){
	int n;
	cin>>n;
	cout<<fib(n) <<endl;
}