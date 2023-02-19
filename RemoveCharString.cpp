//Remove Characters in String Except Alphabets
#include<iostream>
using namespace std;
int main()
{
	string s;
    cout<<"enter the string::"<<endl;
	cin>>s;
	cout<<"print the original string::"<<s<<endl;
	int len=s.size();
	for(int i=0;i<len;i++)
	{
	  if(!((s[i]>='a'&& s[i]<='z')||(s[i]>='A'&& s[i]<='Z')))
	  {
	  	s[i]='\0';
	  }	
	}
	cout<<"after removing charcater , string is::"<<s<<endl;	
}
