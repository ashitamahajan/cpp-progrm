//print sum of all element in an arry
#include<iostream>
using namespace std;

int main()
{
	int arr[5]={12,3,5,-9,7};
	int sum=0;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" "<<endl;
		sum=sum+arr[i];
		cout<<"sum of arr;;"<<sum<<endl;
	}
	cout<<"sum::"<<sum<<endl;
 } 
