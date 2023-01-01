#include<iostream>
using namespace std;

//Fast Exponentitation
//If we want to find a^n, we will need to multiply 'a' with itself 'n' times, i.e log(n) time complexity.
//We can do this in O(log(n)) time if we follow the following method.

//If a = 3 and n = 5, we can write 5 as 101.
//So if we iterate over the bits of n (5 here), and multiply all a^1, a^2, a^4, a^8 and so on with each other, at places where bit is equal to one, we can do this in O(log(n)).
//This is because the the last set bit from right to left is at maximum position equal to log(n) or log(n) + 1.

int fastExpo(int a,int n){
	int ans = 1;

	while(n>0){
		int last_bit = (n&1);
		if(last_bit){
			ans = ans * a;
		}
		a = a*a;
		n = n>>1;

	}
	return ans;
}


int main(){

	int a,n;
	cin>>a>>n;

	cout << fastExpo(a,n) <<endl;


	return 0;
}