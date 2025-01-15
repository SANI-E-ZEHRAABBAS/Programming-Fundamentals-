#include<iostream>
using namespace std;
int main(){
	cout<<"start of program"<<endl;
		jump:
		cout<<"jumped to this line"<<endl;
	goto jump;// jump keyword send the cursor to label of jump
	cout<<"this line is skipped"<<endl;

}
