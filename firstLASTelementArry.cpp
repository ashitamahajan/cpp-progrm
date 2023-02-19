// Display First and Last element of an array
#include<iostream>
using namespace std;
int main()
{
	int arr[50],size;
	cout<<"enter the size::"<<endl;
	cin>>size;
	cout<<"enter the element::"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"elements are::"<<endl;
	for(int i=0;i<size;i++)
	{
		
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	cout<<"first elemtin an array::"<<arr[0]<<endl;
	cout<<"last element in an array::"<<arr[size-1]<<endl;
}
