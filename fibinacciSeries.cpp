//fibonacci series are 0,1,1,2,3,5,8,13,21,34,55__
#include<iostream>
using namespace std;
int main()
{
	int n, n1=0,n2=1;
	int n3;
	cout<<"enter the number::"<<endl;
	cin>>n;
	cout<<n1<<n2;
	
	for(int i=0;i<=n;i++)
	{
		n3=n1+n2;
		
		n1=n2;
		n2=n3;
		cout<<n3;
	}
}
