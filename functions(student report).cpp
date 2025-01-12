#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name; // Student's name
    int rollNumber; // Roll number
    int marks[3]; // Marks for 3 subjects
    int totalMarks; // Total marks
};

void addStudent(Student& student); // Function to add student details
void displayStudent(const Student& student); // Function to display student details
int calculateTotalMarks(const int marks[], int size); // Function to calculate total marks

int main() {
    Student student; // Create a Student object
    addStudent(student); // Add student details
    displayStudent(student); // Display the student's details
    return 0;
}

void addStudent(Student& student) {
    cout<<"Enter the student's name: ";
    getline(cin, student.name);
    cout<<"Enter the roll number: ";
    cin>>student.rollNumber;
    cout<<"Enter marks for 3 subjects: ";
    for(int i=0;i<3;i++) cin>>student.marks[i];
    student.totalMarks=calculateTotalMarks(student.marks,3);
}

void displayStudent(const Student& student) {
    cout<<"Name: "<<student.name<<endl;
    cout<<"Roll Number: "<<student.rollNumber<<endl;
    cout<<"Marks: ";
    for(int i=0;i<3;i++) cout<<student.marks[i]<<" ";
    cout<<"\nTotal Marks: "<<student.totalMarks<<endl;
}

int calculateTotalMarks(const int marks[], int size) {
    int total=0;
    for(int i=0;i<size;i++) total+=marks[i];
    return total;
}

