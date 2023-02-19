#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the  number:"<<endl;
	cin>>a;
	cout<<"enter the number of b"<<endl;
	cin>>b;
	char ops;
	cout<<"enter the airthemetic operator(+ - * / %) :"<<endl;
	cin>>ops;
	switch(ops){
		case '+':
			cout<<a<<"+"<<b<<"="<<a+b;
			break;
			case '-':
			cout<<a<<"-"<<b<<"="<<a-b;
			break;
			case '/':
			cout<<a<<"/"<<b<<"="<<a/b;
			break;
			case '*':
			cout<<a<<"*"<<b<<"="<<a*b;
			break;
			case '%':
			cout<<a<<"%"<<b<<"="<<a%b;
			break;
			default:
				cout<<"error"<<endl;
			
	}	
}
