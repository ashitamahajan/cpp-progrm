#include<iostream>
using namespace std;
int sumOfdigit(int n)
{
	int sum=0;
	while(n!=0)
	{
		sum+=n%10;
		n=n/10;
	}
	return sum;
}

void oddElmntSum(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(sumOfdigit(arr[i])%2!=0)
		{
			cout<<arr[i]<<" ";
		}
	}
}

int main()
{
	int arr[6]={11,57,72,89,29,33};
	
	oddElmntSum(arr,6);
	
}
