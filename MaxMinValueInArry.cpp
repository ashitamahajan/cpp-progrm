//find the max and min value frome arry
#include<iostream>
using namespace std;
int getmax  (int arr[],int size)
{
	int maxi=INT_MIN;
	for(int i=0;i<size;i++)
	{
		// use the max function
		maxi=max(maxi,arr[i]);
		
		/*if(arr[i]>max)
		{
			maxi=arr[i];
		}
		*/
	}
	return maxi;
}

int getmin(int arr[],int size)
{
	int mini=INT_MAX;
	for(int i=0;i<size;i++)
	{
		//use the min function
		
		mini=min(mini,arr[i]);
		/*
		if(arr[i]<min)
		{
			min=arr[i];
		}
		*/
	}
	return mini;
}

int main()
{
	int n;
	cout<<"enter the size::"<<endl;
	cin>>n;
	int arr[100];
	cout<<"enter the elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"maximum value in array::"<<getmax(arr,n)<<endl;
	cout<<"minimum value in array::"<<getmin(arr,n)<<endl;
}
