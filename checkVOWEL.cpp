// check the vowel
#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<"enter teh character::"<<endl;
	cin>>c;
	/*
	if(c=='a' || c=='A' ||c=='e' || c=='E' ||c=='i' || c=='I' ||c=='o' || c=='O' ||c=='u' || c=='U')
	{
		cout<<"vowel"<<endl;
		
	}
	else{
		cout<<"consonant"<<endl;
	}
	*/
	switch(c){
		case 'a':
			cout<<"Vowel";
			break;
			case 'A':
			cout<<"Vowel";
			break;
			case 'e':
			cout<<"Vowel";
			break;
			case 'E':
			cout<<"Vowel";
			break;
			case 'i':
			cout<<"Vowel";
			break;
			case 'I':
			cout<<"Vowel";
			break;
			case 'o':
			cout<<"Vowel";
			break;
			case 'O':
			cout<<"Vowel";
			break;
			case 'u':
			cout<<"Vowel";
			break;
			case 'U':
			cout<<"Vowel";
			break;
			default:
				cout<<"Consonant"<<endl;
	}
}
