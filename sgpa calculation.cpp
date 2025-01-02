#include <iostream>
using namespace std;
int main() {
    //made arrays because same variable same data type input multiple times
    double creditHours[5],gradePoints[5],weightedSum=0,totalCredits=0;
	  
    cout<<"Enter the credit hours and grade points for 5 courses:"<<endl;
    for (int i=1;i<=5;i++) {
        cout <<"Course "<<i<<"Credit Hours:";
        cin>>creditHours[i];
        cout<<"Course"<<i<<"Grade Points:";
        cin>>gradePoints[i];

        // Calculate weighted sum and total credit hours
        weightedSum+=creditHours[i]*gradePoints[i];//ws=ws+(ch*gp)
        totalCredits+=creditHours[i];//tc=tc+ch
    }
    double sgpa = weightedSum / totalCredits;
    cout << "The SGPA for the semester is: " << sgpa << endl;

}

