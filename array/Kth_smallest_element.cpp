#include<iostream>
#include<algorithm>
using namespace std;

void smallest_element(int arr[], int n, int k)
{
	sort(arr, arr+n);
	cout<<"Sorted elements are :"<<endl;
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	cout<<endl<<"Answer: "<<arr[k]<<endl;
}

int main()
{
	int n, k;
	cout<<"Size of the array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements : ";
	for(int i=0; i<n; i++)
		cin>>arr[i];
	cout<<"The elements are : ";
	for(int j=0; j<n; j++)
		cout<<arr[j]<<" ";
	cout<<endl<<"Enter the kth value :";
	cin>>k;
	smallest_element(arr, n, k-1);
}

