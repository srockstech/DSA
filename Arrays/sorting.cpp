#include<iostream>
using namespace std;

template <class T>
void sortArray(T a[], int n)
{ 
	int min_index;
	for(int i = 0; i < n-1; i++)
	{
	    min_index = i;
	    for(int j = i; j < n; j++)
	    {
	        if(a[min_index] > a[j])
	        {
	            min_index = j;
	        }
	    }
	    swap(a[min_index], a[i]);
	}
}

template <class T>
void printArray(T a[], int n)
{
	for(int i = 0; i < n; i++)
	{
	    cout<<a[i]<<" ";
	}
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, q, i;
        cin>>n>>q;

        int intArr[n];
        string strArr[n];
        float floatArr[n];

        switch(q)
        {
            case 1:
            for(i=0; i<n; i++)
            {
                cin>>intArr[i];
            }
            sortArray(intArr, n);
            printArray(intArr, n);
            break;

            case 2:
            for(i=0; i<n; i++)
            {
                cin>>strArr[i];
            }
            sortArray(strArr, n);
            printArray(strArr, n);

            case 3:
            for(i=0; i<n; i++)
            {
                cin>>floatArr[i];
            }
            sortArray(floatArr, n);
            printArray(floatArr, n);
            break;

        }
    }
    return 0;
}