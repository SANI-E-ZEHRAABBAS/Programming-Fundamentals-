#include <iostream>
using namespace std;

int main() {
    int numofsubjects;
    double totalMarks= 0, average;

    // Asking for number of subjects
    cout << "Enter the number of subjects: ";
    cin >> numofsubjects;

    // Loop to input marks for each subject
    for (int i = 1; i<=numofsubjects; i++) {
        double marks;
        cout << "Enter marks for subject " << i << ": ";
        cin >> marks;
        totalMarks += marks;  // Add marks to total
    }

    // Calculate average marks
    average = totalMarks / numofsubjects;

    // Display the average
    cout << "Average marks: " << average << endl;

    // Assign grade based on average marks
    if (average >= 90) {
        cout << "Grade: A" << endl;
    } else if (average >= 80) {
        cout << "Grade: B" << endl;
    } else if (average >= 70) {
        cout << "Grade: C" << endl;
    } else if (average >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    
}

