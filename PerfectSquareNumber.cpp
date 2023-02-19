//print perfect square between two number
#include<iostream>
using namespace std;
int main()
{
	int i,start,end;
	cout<<"enter the starting number::"<<endl;
	cin>>start;
	cout<<"enter the last number::"<<endl;
	cin>>end;
	cout<<"print perfect square between two number::"<<endl;
	while(start<=end)
	{
		for(i=1;i<=start;i++)
		{
			if(i*i==start)
			
				cout<<start<<endl;
			
			
		}
		
		start++;
	}
}
