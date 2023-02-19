//swap two number without using third variable
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the two values a and b::"<<endl;
	cin>>a>>b;
	/*
	a=a+b;
	b=a-b;
	a=b-a;
	*/
	/*
	a=a*b;
	b=a/b;
	a=a/b;
	*/
	swap(a,b);
	cout<<a<<b;
}
