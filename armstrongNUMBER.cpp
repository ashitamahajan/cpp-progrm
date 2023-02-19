//armstrong 153=1^3+5^3+3^3
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
		sum=sum+r*r*r;
		n=n/10;
	}
	if(sum==temp)
	{
		cout<<"aremstrong number"<<endl;
	}
	else
	{
		cout<<"not armstrong number"<<endl;
	}
}
