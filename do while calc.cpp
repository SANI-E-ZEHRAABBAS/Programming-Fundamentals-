#include<iostream>
using namespace std;
int main() {

    double num1, num2, result;
    char op;
    
    do {        
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;
        cout << "Enter second number: ";
        cin >> num2;
}while(num1==0&&num2==0);
     
     switch(op) {
            case '+':
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;
            case '-':
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;
            case '*':
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;
            case '/':
                 result=num1/num2;
                break;
            default:
                cout << "Invalid operator!" << endl;
                break;
    }
 }
    
    
