//linear search
#include<iostream>
using namespace std;
void search(int arr[],int size,int key)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==key)
		{
			cout<<i<<endl;
		}
	}
}

int main()
{
	int arr[5]={12,14,10,9,19};
	search(arr,5,9);
}
