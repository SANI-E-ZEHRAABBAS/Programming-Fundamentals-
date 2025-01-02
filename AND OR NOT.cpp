#include<iostream>
using namespace std;
int main() {
    int age;
    char gender, citizen;

    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your gender (M/F): ";
    cin>>gender;
    cout<<"Are you a citizen of the country? (Y/N): ";
    cin>>citizen;


    if(age>=18 && age<=60 && (gender=='M' || gender=='F') && citizen=='Y') {
        cout<<"You are eligible for the program."<<endl;
    }
    else if(age<18 || citizen=='N') {
        cout<<"You are not eligible because you are either underage or not a citizen."<<endl;
    }
    else if(!(gender=='M' || gender=='F')) {
        cout<<"Invalid gender input."<<endl;
    }
    else {
        cout<<"You do not meet the criteria."<<endl;
    }


}

