//sum of array by using function
#include<iostream>
using namespace std;
int getsum(int arr[])
{
	int sum=0;
	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i];
	
		
	}
	return sum;
}
int main()
{
	int arr[5];
	int sum;
	 
	 cout<<"enter the value::"<<endl;
	 for(int i=0;i<5;i++)
	 {
	 	cin>>arr[i];
	 	
	 	
	}
	sum=getsum(arr);
	 cout<<sum;
	 
}
