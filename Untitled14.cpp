#include <iostream>
using namespace std;
int main ()
{
	char ch;
	cout<<"enter any character to check if it is uppercase or lowercase:"<<endl;
	cin>>ch;
	if ((ch>'A') && (ch<'Z'))
	{
		cout<<"character is uppercase";
	}
	else 
	{
		cout<<"character is lowercase";
	} 
	return 0;
}
