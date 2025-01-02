#include <iostream>
#include <string>
using namespace std;
int main() {
    string userID1="SANI", password1="123", name1="SANIA ABBAS";
    string userID2="MOHAMMAD", password2="321", name2="SABA MOHAMMAD";

    string enteredID, enteredPassword;

    cout<<"Enter your ID:";
    cin>>enteredID;

    if(enteredID==userID1 || enteredID==userID2) {
        cout<<"Enter your password:";
        cin>>enteredPassword;

        if(enteredID==userID1) {
            if(enteredPassword==password1) {
                cout<<"Welcome "<<name1<<"!"<<endl;
            } else {
                cout<<"Incorrect Password"<<endl;
            }
        } else if(enteredID==userID2) {
            if(enteredPassword==password2) {
                cout<<"Welcome "<<name2<<"!"<<endl;
            } else {
                cout<<"Incorrect Password"<<endl;
            }
        }
    } else {
        cout<<"Incorrect ID"<<endl;
    }

    
}

