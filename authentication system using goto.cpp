#include<iostream>
using namespace std;

int main()
{
int pass=1234;
int userenteredpass;
int attempts=0;

  retry:
 cout<<"enter your pass"<<endl;
 cin>>userenteredpass;

 if(userenteredpass==pass){
 	cout<<"welcome";
 	}
 	
 else{
 	attempts ++;
 	if (attempts<=2)
 	{
 	cout<<"Incorrect Password!"<<endl;
 	goto retry;
	}
	else
	{
		cout<<"Error!";
	}
}
  return 0;		
}
 			
 
 
 	
 		
