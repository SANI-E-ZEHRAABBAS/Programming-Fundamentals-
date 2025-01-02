#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number till when you want table of sq and cube"<<endl;
	cin>>n;
	if(n>0){
		for(int i=1;i<=n;i++){
			cout<<"number:"<<i<<endl;
			cout<<"square:"<<i*i<<endl;
			cout<<"cube:"<<i*i*i<<endl;
		}
	}
}
