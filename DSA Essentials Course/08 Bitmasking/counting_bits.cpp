#include<iostream>
using namespace std;

int count_bits(int n){
	
	//1111 - n (15)
	//n&1 will be 1 if the 0th bit is 1 and it will be 0 if oth bit is 0.
	//Then with every iteration, right shift 'n' by 1 and keep adding the result of n&1 to count.
	//Run the loop until 'n' becomes zero. This will end the loop earlier since loop will terminate if no more '1's will be left in 'n'.
	int count = 0;
    while(n>0){
        count += n&1;
        n >>= 1;
    }
    return count;
}

//Counting Sets Bits : Hack  (Faster method)
int count_bits_hack(int n){

	//10001 - n (17)
	//10000 - n-1 (16)
	//10000 - n = n & (n-1) (17 & 16)
	//01111 - n-1 (15)
	//00000 - n & 15 (0)
	//This only needs two iterations

	int ans = 0;
	while(n>0){
		//removes the last set bit from the current number
		n = n & (n-1);
		ans++;
	}

	return ans;

}


int main(){


	int n;
	cin>>n;

	cout<<count_bits(n) <<endl;
	// cout<<count_bits_hack(n) <<endl;

	return 0;
}