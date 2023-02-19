//factorial 
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number;;"<<endl;
	cin>>n;
	int fact=n;
	for(int i=1;i<n;i++)
	{
		
		cout<<fact<<"*"<<i<<"=";
		fact=fact*i;
		cout<<fact<<endl;
		
	}
	cout<<"factorial number "<<n<<"is"<<"="<<fact;
}
