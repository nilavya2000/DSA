#include<iostream>
using namespace std;

void rev_arr(int arr[], int s, int e)
{
	while(s < e)
	{
		int t = arr[s];
		arr[s] = arr[e];
		arr[e] = t;
		s++;
		e--;
	}
}


void display(int arr[], int size)
{
	for(int i=0; i<size; i++)
	cout<<arr[i]<<" ";
	cout<<endl;
}

int main()
{
	int size;
	cout<<"Enter the size of the array: ";
	cin>>size;
	int arr[size];
	cout<<"Enter the array: - ";
	for(int i=0; i<size; i++)
		cin>>arr[i];
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<"Array: ";
	display(arr, n);
	cout<<endl;
	rev_arr(arr, 0, n-1);
	cout<<"Reversed array :  ";
	display(arr, n);
	return 0;
}
