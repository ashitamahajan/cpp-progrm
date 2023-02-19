//prime number b/w two interval

#include<iostream>
using namespace std;

int main()
{
	int start,end,i,f=0;
	cout<<"enter the starting  number:"<<endl;
	cin>>start;
	cout<<"enter the ending number:"<<endl;
	cin>>end;
	cout<<"prime numbers between two intervals:"<<endl;
	
	while(start<=end)
	{
		f=0;
		for(i=2;i<=start/2;i++)
		{
			if(start%i==0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		
		cout<<start<<endl;
		start=start+1;
	}
}
