#include <iostream>
using namespace std;
int main ()
{
	int year;
	cout<<"input any to year to check if it is a leap year"<<endl;
	cin>>year;
	
	if(year%4==0)
	{
		cout<<"it is a leap year"<<endl;
	}
	else 
	{
		cout<<"it is not a leap year"<<endl;
	}
	return 0;
}
