//palindrome number
#include<iostream>
using namespace std;
int main()
{
	int n,r,sum=0,temp;
	cout<<"enter the number::"<<endl;
	cin>>n;
	temp=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
		
	}
	if(temp==sum)
	{
		cout<<"palidrome number"<<endl;
	}
	else
	{
		cout<<"not palidrome"<<endl;
	}
}
