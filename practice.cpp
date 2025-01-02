
#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    bool isValid ;

    do{
	
        cout << "Enter a password: ";
        cin >> password;

        if (password.length() < 8) {
            cout << "Password too short. Must be at least 8 characters.\n";
            continue;
        }

        bool hasDigit ;

        for (int i = 0; i < password.length(); i++) {
            if (isdigit(password[i])) {
                hasDigit = true;
                break;
            }
        }

        if (!hasDigit) {
            cout << "Password must contain at least one digit.\n";
            continue;
        }

        isValid = true;
    }while (!isValid);

    cout << "Password is valid.\n";
    
}


