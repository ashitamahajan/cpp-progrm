//sum of digit of a number
#include<iostream>
using namespace std;
int main()
{
	int n,r,sum=0;
	cout<<"enter the number;"<<endl;
	cin>>n;
	
	while(n!=0)
	{
		r=n%10; //123%10=3,12%10=2,1%10=1
		sum=sum+r;//0+3=3,3+2=5,5+1=6
		n=n/10;//123/10=12,12/10=1,1/10=0  //  while(0!=0)=>wrong
	}
	cout<<"sum is::"<<sum<<endl;//sum=6
}
