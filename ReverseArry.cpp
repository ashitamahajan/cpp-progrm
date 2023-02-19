//reverse an array
#include<iostream>
using namespace std;

void reverse(int arr[],int size)
{
	int start=0;
	int end=size-1;
	while(start<=end)
	{
		swap(arr[start],arr[end]);
		start++;
		end--;
		
	}
}
void printArry(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int arr[6]={5,6,3,4,9,2};
	int brr[5]={3,8,0,12,1};
	reverse(arr,6);
	reverse(brr,5);
	printArry(arr,6);
	printArry(brr,5);
}
