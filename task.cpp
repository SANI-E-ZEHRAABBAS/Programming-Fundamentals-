#include<iostream>
using namespace std;
int main()
{
	int i;
	cout<<"enter the number for which you want table:"<<endl;
	cin>>i;
	char a='x';
	int l;
	cout<<"enter the limit:"<<endl;
	cin>>l;
	char f='=';
	for(int j=1;j<=l;j++)
	{
			int ans=i*j;
		cout<<i<<a<<j<<f<<ans<<endl;
	}
	
}
