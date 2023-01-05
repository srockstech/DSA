#include<iostream>
using namespace std;

//Find the foctorial of the given number.
//TC: O(n), SC: O(n)
//We just need to figure out two cases: Base case and recursive case.
//Recursion takes more time due to the implicit stack it creates.
int fact(int n){
	//base case
	if(n==0){
		return 1;
	}
	//recursive case
	int ans = n*fact(n-1);
	return ans;
}

int main(){
	int n;
	cin>>n;
	cout<<fact(n) <<endl;

}