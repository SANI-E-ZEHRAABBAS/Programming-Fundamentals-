#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    float a =9.6; 
    float b=3.7;  
    int c;          
    cout<<"Enter the value of c: ";
    cin>>c;
    float discriminant=(b*b)-(4*a*c);
    if (discriminant<0) {
        cout<<"The equation has no real roots as the discriminant is negative."<<endl;
    } else {
        
        float x1=(-b+sqrt(discriminant))/(2 * a);
        float x2 =(-b-sqrt(discriminant))/(2 * a);
        
        cout<<"The roots of the quadratic equation are:"<<endl;
        cout<<"x1="<<x1<<endl;
        cout<<"x2="<<x2<<endl;
    }


}

