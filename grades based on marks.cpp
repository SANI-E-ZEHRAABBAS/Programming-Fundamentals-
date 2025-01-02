#include<iostream>
using namespace std;
int main()
{
	int hour;
    cout << "Enter the hour (0-24): ";
    cin >> hour;

    switch (hour) {
        case 6 ... 11: //.... shows range and inclusivity
            cout << "Good Morning"<< endl;
            break;
        case 12 ... 17: 
            cout << "Good Afternoon" << endl;
            break;
        case 18 ... 20: 
            cout << "Good Evening" << endl;
            break;
        case 21 ... 23:
            cout << "Good Night" << endl;
            break;
        case 0 ... 5: 
            cout << "Good Night" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
            
    }
	
	
	
}

