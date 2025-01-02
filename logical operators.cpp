#include <iostream>
#include <string>
using namespace std;
int main() {
    
    char gender;
    int age, salary;
    char city;

    cout<<"Enter gender (F for female, M for male):";
    cin>>gender;

    cout<<"Enter age:";
    cin>>age;

    cout<<"Enter city (K for Karachi, H for Hyderabad, S for Sukker, G for Ghotki):";
    cin>>city;

    cout<<"Enter present salary:";
    cin>>salary;

    if(gender=='F'&&(age>=25&&age<=35)&&(city=='K'||city=='H')){
        salary+=2000;
        cout<<"Net salary:"<<salary<<endl;
    } else if (gender=='M'&&(age>=25&&age<=40)&&(city=='S'||city=='G')) {
        salary+=2500;  
        cout<<"Net salary:"<<salary<<endl;
    } else {   
        cout<<"Net salary:"<<salary<<endl;
    }
}

