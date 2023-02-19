//10 integer inputs from user and store them in an array and print them
#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		cout<<"Enter the numbers are::"<<endl;
		cin>>arr[i];
	}
	cout<<"Numbers are::"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	
		
	}
	cout<<endl;
	cout<<"value at 0 index:"<<arr[0]<<endl;
	cout<<"value at 2 index:"<<arr[2]<<endl;
	cout<<"value at 7 index:"<<arr[7]<<endl;
}
