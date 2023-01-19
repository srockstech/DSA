#include<iostream>
using namespace std;

//Find the mazimum subarray sum
//Kadane's algorithm TC: O(n), SC: O(1)
//We assume the largest sum will not be a negative number i.e, there must be a positive number in the given array.
//This doesn't work when all the elements in the given array are negative.
//While traversing the array keep adding the elements to a variable 'cs'.
//If 'cs' becomes negative, make it zero i.e.discard the current subarray and start considering the subarray from the next element.

int maximum_subarray_sum(int arr[],int n){

	int cs = 0;
	int largest = 0;
	for(int i=0;i<n;i++){
		cs = cs + arr[i];
		if(cs < 0){
			cs = 0;
		}
		largest = max(largest, cs);
	}

	return largest;
}


int main(){
	
	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int n = sizeof(arr)/sizeof(int);

	cout<< maximum_subarray_sum(arr,n) <<endl;

	return 0;
}