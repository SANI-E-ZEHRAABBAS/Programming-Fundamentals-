#include<iostream>
using namespace std;

int checkevenodd(int num){
	if(num%2==0)
		return 1;
		else
		return 0;	
}
int main(){
	int num;
	cout <<"enter a num"<<endl;
	cin>>num;
	if(0)
	cout<<num<<"is even"<<endl;
	else
	cout<<num<<"is odd"<<endl;
}
