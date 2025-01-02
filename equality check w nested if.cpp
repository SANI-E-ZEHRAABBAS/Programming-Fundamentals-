#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;

    cout<<"Enter the first number:";
    cin>>num1;
    cout<<"Enter the second number:";
    cin>>num2;
    cout<<"Enter the third number:";
    cin>>num3;

    if(num1==num2){
        if(num2==num3){
            cout<<"All values are equal"<<endl; 
        }
        else {
            cout<<"They all are not equal"<<endl; 
        }
    }
    else {
        cout<<"They all are not equal"<< endl; 
    }

}

