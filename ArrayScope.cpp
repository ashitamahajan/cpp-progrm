//array scope
#include<iostream>
using namespace std;
void update(int arr[],int size){
	cout<<"inside the function:"<<endl;
	//updating array at the first element
	arr[0]=120;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"going back to the main function::"<<endl;
}

int main()
{
	int arr[5]={1,2,3,4,5};
	//update function
	update(arr,5);//call the update function
	
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
