//display the perfect number
#include<iostream>
using namespace std;
int main()
{
	int i,start,end,sum=0;
	cout<<"enter the starting number::"<<endl;
	cin>>start;
	cout<<"enter the last number::"<<endl;
	cin>>end;
	cout<<"perfect numbers are::"<<endl;
	while(start<=end)
	{
		sum=0;
		for(i=1;i<=start/2;i++)
		{
			if(start%i==0)
			{
				sum=sum+i;
				
			}
		}
	     if(sum==start)
	     cout<<start<<endl;
	
		start++;
	}
}

