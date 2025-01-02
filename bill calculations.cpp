#include<iostream>
using namespace std;
int main() {
    int previousReading, currentReading, unitsConsumed;
    float costPerUnit, grossBill, netBill;

    cout<<"Enter previous reading: ";
    cin>>previousReading;
    cout<<"Enter current reading: ";
    cin>>currentReading;

    
    unitsConsumed=currentReading-previousReading;

    
    if(unitsConsumed<=300) {
        costPerUnit=4.0;
        grossBill=unitsConsumed*costPerUnit;
        netBill=grossBill-(0.03*grossBill); 
    }
    else if(unitsConsumed>=301 && unitsConsumed<=400) {
        costPerUnit=6.0;
        grossBill=unitsConsumed*costPerUnit;
        netBill=grossBill; 
    }
    else {
        costPerUnit=7.0;
        grossBill=unitsConsumed*costPerUnit;
        netBill=grossBill+(0.04*grossBill); 
    }

    
    cout<<"Units Consumed: "<<unitsConsumed<<endl;
    cout<<"Gross Bill: Rs."<<grossBill<<endl;
    cout<<"Net Bill after adjustments: Rs."<<netBill<<endl;

}

