#include<iostream>
using namespace std;

//To get the value of the bit at ith position (i starts from 0)
int getIthBit(int n,int i){
	//1101 - n (n = 13)
	//0100 - 1<<i (i = 2)
	//0100 -  (n & (1<<i)) (This will be 0 if the ith bit is zero, else it will be a number greater than 0)
	int mask = (1<<i);
	return ((n & mask) > 0) ? 1 : 0;
}

//to set (make the bit 1) ith bit
void setIthBit(int &n,int i){
	//1101 - n (n = 13) 
	//0010 - (1<<i) (i = 1)
	//1111 - (n | 1<<i) (This will change the 0 to 1 and 1 will remain 1.)
	int mask = (1<<i);
	n = (n|mask);
}

//to clear (make the bit 0) ith bit
void clearIthBit(int &n,int i){
	//1101 - n (n = 13)
	//1011 - ~(1<<i) (i = 2)
	//1001 - (n & ~(1<<i))
	int mask = ~(1<<i);
	n = (n & mask);
}

void updateIthBit(int &n,int i,int v){
	int mask;
	if(v == 0){
		mask = ~(1<<i);
		n = (n&mask);
	}
	else{
		mask = (1<<i);
		n = n|mask;
	}
}

void clearLastIBits(int &n,int i){
	int mask = (-1 << i);
	n = n & mask;
}

void clearBitsInRange(int &n,int i,int j){
	int a = (~0)<<(j+1);
	int b = (1<<i) - 1;
	int mask = a|b;
	n = n & mask;
}


int main(){

	int n = 13;
	int i=1;
	// int j=3;
	//cin>>i;
	// cout<<getIthBit(n,i) <<endl;
	// setIthBit(n,i);
	// clearIthBit(n,i);
	updateIthBit(n,i,1);
	//clearLastIBits(n,i);
	// clearBitsInRange(n,i,j);
	cout << n <<endl;;



	return 0;
}