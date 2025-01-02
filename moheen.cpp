#include <iostream>
using namespace std;

struct result{
   int rollno;
   char grade;
};

int main () 
{
    int i=0;
    result list[3]= { { 23, 'a' } , { 15, 'b' } , { 7, 'c' } };
    while (i!=3){
    cout << list[i].rollno << endl;
    cout << list[i].grade << endl;
    
    i++;
    }
}
