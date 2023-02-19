//prime number
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"enter the number::"<<endl;
	cin>>n;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			cout<<"not prime::"<<endl;
			break;
		
			cout<<"prime:"<<endl;
		}
		
	}
	if( i==n)
	{
		cout<<"prime number"<<endl;
	}
	
}
