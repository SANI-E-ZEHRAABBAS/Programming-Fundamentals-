#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int num1=15,num2=100;
	
	int sum=num1+num2;
	
	


ofstream outFile("calculation_results.txt",ios::app);
if (!outFile){
	cout<<"error:unable to open file"<<endl;
	return 1;
}
outFile<<" The sum of"<<num1<<"and"<<num2<<"is"<< sum <<endl;
outFile.close();
cout<<"result saved to 'calculation_results.txt"<<endl;
ifstream inFile("calculation_results.txt");
if(!inFile){
	cout<<"unable to open file for reading"<<endl;
	return 1 ;
}
string line ;
cout<<"reading from the files"<<endl;
while(getline(inFile,line)){
	cout<<line<<endl;
}
inFile.close();
return 0;
}
