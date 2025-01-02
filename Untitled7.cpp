#include <iostream>
using namespace std;
int main ()
{
	char ch;
	cout<<"enter a character"<<endl;
	cin>>ch;
	if ((ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u'))
       {
       	cout<<"the character is a vowel"<<endl;
	   }
    else 
	{
		cout<<"the character is a consonant"<<endl;
	}
    return 0;
}
