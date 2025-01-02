#include<iostream>
using namespace std;
int main() {
    int school, department;

    cout<<"Enter the school number (1 for School of Computer Science, 2 for School of Business, 3 for School of Engineering): ";
    cin>>school;

    switch(school) {
        case 1: 
            cout<<"Enter department number (1 for Department of Informatics, 2 for Department of Machine Learning): ";
            cin>>department;
            switch(department) {
                case 1:
                    cout<<"Department of Informatics, School of Computer Science"<<endl;
                    break;
                case 2:
                    cout<<"Department of Machine Learning, School of Computer Science"<<endl;
                    break;
                default:
                    cout<<"Invalid department for School of Computer Science"<<endl;
                    break;
            }
            break;

        case 2: 
            cout<<"Enter department number (1 for Department of Commerce, 2 for Department of Purchasing): ";
            cin>>department;
            switch(department) {
                case 1:
                    cout<<"Department of Commerce, School of Business"<<endl;
                    break;
                case 2:
                    cout<<"Department of Purchasing, School of Business"<<endl;
                    break;
                default:
                    cout<<"Invalid department for School of Business"<<endl;
                    break;
            }
            break;

        case 3: 
            cout<<"Enter department number (1 for Department of Mechanical Engineering, 2 for Department of Mechatronics Engineering): ";
            cin>>department;
            switch(department) {
                case 1:
                    cout<<"Department of Mechanical Engineering, School of Engineering"<<endl;
                    break;
                case 2:
                    cout<<"Department of Mechatronics Engineering, School of Engineering"<<endl;
                    break;
                default:
                    cout<<"Invalid department for School of Engineering"<<endl;
                    break;
            }
            break;

        default:
            cout<<"Invalid school number"<<endl;
            break;
    }

}

