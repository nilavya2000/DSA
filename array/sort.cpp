#include<iostream>
using namespace std;

void arrange(int arr[], int n)
{
	int j=0;
	for(int i=0; i<n; i++)
	{
		if(arr[i]<0)
		{
			if(i!=j)
				swap(arr[i], arr[j]);
			j++;
		}
	}
}

void display(int arr[], int n)
{
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
}

int main()
{
	int n;
	cout<<"Enter the number of elements : ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements: ";
	for(int i=0; i<n; i++)
		cin>>arr[i];
	display(arr, n);
	cout<<endl;
	arrange(arr, n);
	display(arr, n);
	cout<<endl;
}
