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

//Update the bit at ith position to the given value (1 or 0)
void updateIthBit(int &n,int i,int v){
	//just the combination of setIthBit and clearIthBit
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

//Make last i bits zeros
void clearLastIBits(int &n,int i){
	//1111 - (n) (n = 15)
	//1100 - (-1<<i) (i = 2) //-1 = 1111, also ~0 = 1111. Hence, any of them can be used.
	//1100 - n & (-1<<i)
	int mask = (-1 << i);
	n = n & mask;
}

//clear bits from ith bit to jth bit (counting from 0)
void clearBitsInRange(int &n,int i,int j){
	//11011 - n (27)
	//10000 - a = -1<<(j+1) (j = 3)
	//00001 - b = ~(-1<<i) (i = 1)
	//10001 - mask = a | b
	//11011 - n (27)
	//10001 - mask
	//10001 - n & mask
	int a = -1<<(j+1);
	int b = ~(-1<<i);
	int mask = a|b;
	n = n & mask;
}

int main(){

	int n = 27;
	int i=1;
	int j=3;
	//cin>>i;
	// cout<<getIthBit(n,i) <<endl;
	// setIthBit(n,i);
	// clearIthBit(n,i);
	// updateIthBit(n,i,1);
	//clearLastIBits(n,i);
	clearBitsInRange(n,i,j);
	cout << n <<endl;;



	return 0;
}