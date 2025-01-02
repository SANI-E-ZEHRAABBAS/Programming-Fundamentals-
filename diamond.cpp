#include<iostream>
using namespace std;
void diamond(int n){
	for(int i=1;i<=n;i++){  //this loop is for number of rows 
	for(int j=1;j<=n-i;j++){    // this loop is for spacing
	cout<<" ";
	}
	for(int k=1;k<=i;k++){ //this loop is for printing 1to5 
		cout<<"*";
	}
		for(int l=i-1;l>=1;l--){
		cout<<"*";
	}
		cout<<endl;
	
}
}
void inverteddiamond(int n){
	for(int i=5;i>=1;i--){  //this loop is for number of rows 
	for(int j=1;j<=n-i;j++){    // this loop is for spacing
	cout<<" ";
	}
	for(int k=1;k<=i;k++){ //this loop is for printing 
		cout<<"*";
	}
	for(int l=i-1;l>=1;l--){
		cout<<"*";
	}
	cout<<endl;
	
}
}

int main(){
	int n=5;
	cout<<"diamond"<<endl;
	diamond(n);
	inverteddiamond(n);
	cout<<endl;
	
	
}
