//linear search
#include<iostream>
using namespace std;
bool search(int arr[],int size,int key)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==key)
		{
			cout<<i<<endl;
			return 1;
			
		}
	}
	return 0;
}

int main()
{
	int i;
	int arr[7]={5,7,-2,10,22,-2,5};
	int key;
	cout<<"enter the key::"<<endl;
	cin>>key;
	bool found=search(arr,7,key);
	if(found)
	{
		cout<<"key is present"<<endl;
	}
	else
	{
		cout<<"key is not present"<<endl;
	}
}
