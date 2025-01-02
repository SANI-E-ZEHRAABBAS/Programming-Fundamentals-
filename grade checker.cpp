#include <iostream>
using namespace std;
int main() {
    
    int marks;

    cout<<"Enter marks obtained by the student(out of 100):";
    cin>>marks;

    if (marks>=90){
        cout<<"Grade:A+"<< endl;
    } else if(marks>=70&&marks<90) {
        cout<<"Grade: A"<<endl;
    } else if(marks>=50&&marks<70) {
        cout<<"Grade: B"<<endl;
    } else {
        cout<<"Grade: F"<<endl;
    }


}

