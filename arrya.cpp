#include<iostream>
using namespace std;
void printArry(int arr[],int size){
	cout<<"printing the arry::"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"printing is done:"<<endl;
}
int main()
{
	int number[15];
	cout<<"value at index at 14::"<<number[14]<<endl;
	int arr1[10]={2,7};
	int n=10;
	printArry(arr1,10);
	int arr1Size=sizeof(arr1)/sizeof(int);
	cout<<"size of arr1::"<<arr1Size<<endl;
}

