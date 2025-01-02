#include <iostream>
using namespace std;
int main() {
    
    char gender;
    cout<<"Enter a single letter ('f' for female or any other letter for male): ";
    cin>>gender;

    
    if (gender=='f'||gender=='F') {
        cout<<"You are a female"<<endl;
    } else {
        cout<<"You are a male"<<endl;
    }

}
