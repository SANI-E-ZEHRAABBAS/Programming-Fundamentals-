#include <iostream>
using namespace std;
int main()
{
	int age = 20;
	bool hasID= true;
	if (age>=18)
	{
	   if (hasID)
	   {
	 	cout<<"Entry Allowed"<<endl;
	   }
	   else 
	   {
	 	cout<<"Please shoe ID"<<endl;
	   }
	}
	else
	{
		cout<<"Underage. Entry Denied."<<endl;
	}
	
	return 0;
}
