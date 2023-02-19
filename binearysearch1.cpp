//binearysearch odd and even arry
#include<iostream>
using namespace std;

int search(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
	while(start<=end)
	{
		if(key==arr[mid])
		{
			return mid;
		}
		else if(key>=arr[mid])//go to right side
		{
			start=mid+1;
		}
		if(key<=arr[mid]) //go to left side
		{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	  return -1;
}


int main()
{
	int even[6]={12,13,14,15,16,17};
	int odd[5]={21,22,23,24,25};
	int evenindex=search(even,6,16);
	cout<<"index of 16:::"<<evenindex<<endl;
	
	int oddindex=search(odd,5,23);
	cout<<"index of 23::"<<oddindex<<endl;
}
