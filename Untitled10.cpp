#include <iostream>
using namespace std;
int main ()
{
	int a,b;
	cout<<"enter any two numbers"<<endl;
	cin>>a;
	cin>>b;
	if (a>b)
	{
		cout<<a<<"is greater than"<<b<<endl;
	}
	else if (b>a)
	{
        cout<<b<<"is greater than"<<a<<endl;
    }
    else
    {
    	cout<<"both the numbers are equal"<<endl;
	}
	return 0;
	
	
}
