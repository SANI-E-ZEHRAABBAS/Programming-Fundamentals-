/* this code is taking input of credentials of first student in main passing all 5 matks to udf1 ,
                          then udf 1 is finding out min and passing it to
                      udf 2 udf 2 is initializing second student credential and taking out max from his marks and adding
             		   the min passed from udf1 and its own max and returning it to udf1 */
#include <iostream>            		   
#include <string>
using namespace std;

struct record {
    string name;
    int id;
    int marks[5];
};

void udf1(record abc); 
int udf2(int x);      

int main() {
    record s1;
    cout << "Enter the name: " << endl;
    cin >> s1.name;
    cout << "Enter ID: " << endl;
    cin >> s1.id;
    for (int i = 0; i < 5; i++) { 
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> s1.marks[i];
    }
    udf1(s1); 
    return 0;
}

void udf1(record abc) {
    cout << "Name is: " << abc.name << endl;
    cout << "ID is: " << abc.id << endl;

    int min = abc.marks[0];
    for (int i = 1; i < 5; i++) { 
        if (min > abc.marks[i]) {
            min = abc.marks[i];
        }
    }

    cout << "Result from udf2: " << udf2(min) << endl; //thrower of min value and catcher of return
}

int udf2(int x) {
    record s2 = {"saba", 20, {45, 12, 78, 46, 68}};
    int ans = x + s2.marks[4];
    return ans;
}

