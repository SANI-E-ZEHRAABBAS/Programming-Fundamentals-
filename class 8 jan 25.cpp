#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int num1,num2;
	try{
	
	 cout<<"enter num1"<<endl;
if	(!(cin>>num1)){
	throw"input is not an integer";
}
	 cout<<"enter num2"<<endl;
	 if(!(cin>>num2)){
	 	throw"input is not a integer";
	 }

	int sum=num1+num2;
	cout<<"the sum of "<<num1<<"and"<<num2<<"is"<<sum<<endl;
	
} catch (const char*abc)
{

	cout<<"exception:"<<abc<<endl;
}
ofstream outFile("calculation_results.txt",ios::app);
if (!outFile){
	cout<<"error:unable to open file"<<endl;
	return 1;
}
outFile<<" The sum of"<<num1<<"and"<<num2<<"is"<< sum <<endl;
outFile.close();
cout<<"result saved to 'calculation_results.txt"<<endl;
return 0;
}
