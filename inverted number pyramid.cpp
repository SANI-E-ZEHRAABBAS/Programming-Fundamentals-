#include<iostream>
using namespace std;

void numberinvertedpyramid(int n){
	for(int i=5;i>=1;i--){  //this loop is for number of rows 
	for(int j=1;j<=n-i;j++){    // this loop is for spacing
	cout<<" ";
	}
	for(int k=1;k<=i;k++){ //this loop is for printing 1to5 
		cout<<k;
	}
	for(int l=i-1;l>=1;l--){
		cout<<l;
	}
	cout<<endl;
	
}
}
int main(){
	int n=5;
	cout<<"numberinverted pyramid"<<endl;
	numberinvertedpyramid(n);
	cout<<endl;
}