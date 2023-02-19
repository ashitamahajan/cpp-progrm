//bineary search
#include<iostream>
using namespace std;

int binearysrch(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		//go to right side
		else if(key>arr[mid])
		{
			start=mid+1;
		}
		//goo to left side
		if(key<arr[mid])
		{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return -1;
}

int main()
{
	int arr[5]={1,2,3,4,5};
	cout<<binearysrch(arr,5,4);
}
