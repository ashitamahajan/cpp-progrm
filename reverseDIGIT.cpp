//reverse number
#include<iostream>
using namespace std;
int main()
{
	int n,r ,rev=0;
	cout<<"enter the number::"<<endl;
	cin>>n;
	while(n!=0)
	{
		r=n%10; //123%10=3,12%10=2,1%10=1
		rev=rev*10+r; //0*10+3=3, 3*10+2=32 , 32*10+1=321
		n=n/10; //123/10=12 ,12/10=1,1/10=0;
	}
	cout<<"reverse number::"<<rev<<endl;
}
