#include <iostream>
using namespace std;
int main() {
    
    double miles;
    cout <<"Enter the distance between SHU and your home in miles:";
    cin >> miles; 
    
    double kilometers=miles*1.60934;
    double meters=kilometers*1000;
    double centimeters=meters*100;
    double millimeters=centimeters*10;
    double micrometers=millimeters*1000;

    cout<<"Distance in kilometers:"<< kilometers<<"km"<<endl;
    cout<<"Distance in meters:"<< meters<<"m"<<endl;
    cout<<"Distance in centimeters:"<<centimeters<<"cm"<<endl;
    cout<<"Distance in millimeters:"<< millimeters<<"mm"<<endl;
    cout<<"Distance in micrometers:"<< micrometers <<"µm"<<endl;

}
