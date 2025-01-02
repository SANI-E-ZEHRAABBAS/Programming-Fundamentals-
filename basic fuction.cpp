#include<iostream>
using namespace std;

 float avg(int marks[], int size);
 
 int main(){
  int size;
  cout<<"enter the size"<<endl;
  cin>>size;
  int studentmarks[size];
  for(int i=0;i<size;i++){
  	cout<<"enter marks"<<endl;
  	cin>>studentmarks[i];
  }
    cout<<"Marks entered"<< endl;
    for(int i=0; i<size; i++){
        cout<<"Student"<<i+1<<"="<< studentmarks[i] << endl;
  
}
float average= avg(studentmarks,size);
  cout<<"your average is"<<average;
}
float avg(int marks[], int size){
	
	int sum=0;
	for(int i=0;i<size;i++){
		sum+=marks[i];
	}
	cout<<"your sum is "<<sum<<endl;
	return (float)sum/size;
}

