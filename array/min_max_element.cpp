#include<iostream>
using namespace std;

struct Pair
{
	int max=0;
	int min=0;
};

struct Pair getMinMax(int arr[], int n)
{
	struct Pair minmax;
	int i;
	if(n==1)
	{
		minmax.max = arr[0];
		minmax.min = arr[0];
		return minmax;
	}
	if(arr[0] > arr[1])
	{
		minmax.max = arr[0];
		minmax.min = arr[1];
	}
	else
	{
		minmax.max = arr[1];
		minmax.min = arr[0];
	}
	for(i=2; i<n; i++)
	{
		if (arr[i] > minmax.max)
			minmax.max = arr[i];
		else if(arr[i] < minmax.min)
			minmax.min = arr[i];
	}
	return minmax;
}


int main()
{
	int size;
	cout<< "Enter the size of the array: ";
	cin >> size;
	int arr[size];
	cout<<"Enter the numbers : ";
	for(int i=0; i<size; i++)
		cin>> arr[i] ;
	struct Pair minmax = getMinMax(arr, size-1);
	cout<<"Max no: "<<minmax.max<<endl;
	cout<<"Min no: "<<minmax.min<<endl;
	return 0;
}
