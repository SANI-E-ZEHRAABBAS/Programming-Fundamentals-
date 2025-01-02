#include <iostream>
using namespace std;
int main ()
{
	int age;
	cout<<"Enter your age:"<<endl;
	cin>>age;
	
	if (age>=65)
	{
		cout<<"You are eligible for discount"<<endl;
	}
	else
	{
	cout<<"You are not eligible for the discount"<<endl;
	}
	return 0;
}
