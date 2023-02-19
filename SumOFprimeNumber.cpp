//sum of prime number b/w 1 to n
#include<iostream>
using namespace std;
int main()
{
	int start,end,i,f=0,sum=0;
	cout<<"enter the starting number::"<<endl;
	cin>>start;
	cout<<"enter the ending number::"<<endl;
	cin>>end;
	cout<<"sum of prime number b/w 1 to n::"<<endl;
	while(start<=end)
	{
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
		}
		if(f==0)
		{
			sum=sum+start;
			cout<<start<<" "<<"prime"<<endl;
		}
		start=start+1;
	}
	cout<<"sum of prime number is::"<<sum;
	
}
