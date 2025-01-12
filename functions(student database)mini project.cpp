#include<iostream>
#include<string>
using namespace std;

struct Student{
    string name;
    int id;
    string department;
};

const int MAX_STUDENTS=100;
Student students[MAX_STUDENTS];
int studentCount=0;

void addStudent(){
    if(studentCount>=MAX_STUDENTS){
        cout<<"Database is full. Can't add more students.\n";
        return;
    }
    cout<<"\nEnter student details:\n";
    cout<<"Name: ";
    cin.ignore();
    getline(cin,students[studentCount].name);
    cout<<"ID: ";
    cin>>students[studentCount].id;
    cout<<"Department: ";
    cin.ignore();
    getline(cin,students[studentCount].department);
    studentCount++;
    cout<<"Student added.\n";
}

void displayStudents(){
    if(studentCount==0){
        cout<<"No students to display.\n";
        return;
    }
    cout<<"\nStudents List:\n";
    for(int i=0;i<studentCount;++i){
        cout<<"ID: "<<students[i].id<<", Name: "<<students[i].name<<", Department: "<<students[i].department<<endl;
    }
}

void searchStudent(){
    int searchId;
    cout<<"\nEnter ID to search: ";
    cin>>searchId;
    for(int i=0;i<studentCount;++i){
        if(students[i].id==searchId){
            cout<<"Found: ID: "<<students[i].id<<", Name: "<<students[i].name<<", Department: "<<students[i].department<<endl;
            return;
        }
    }
    cout<<"Student with ID "<<searchId<<" not found.\n";
}

void updateStudent(){
    int updateId;
    cout<<"\nEnter ID to update: ";
    cin>>updateId;
    for(int i=0;i<studentCount;++i){
        if(students[i].id==updateId){
            cout<<"Current Name: "<<students[i].name<<"\nNew Name: ";
            cin.ignore();
            getline(cin,students[i].name);
            cout<<"Current Department: "<<students[i].department<<"\nNew Department: ";
            getline(cin,students[i].department);
            cout<<"Updated successfully.\n";
            return;
        }
    }
    cout<<"Student with ID "<<updateId<<" not found.\n";
}

void deleteStudent(){
    int deleteId;
    cout<<"\nEnter ID to delete: ";
    cin>>deleteId;
    for(int i=0;i<studentCount;++i){
        if(students[i].id==deleteId){
            for(int j=i;j<studentCount-1;++j){
                students[j]=students[j+1];
            }
            studentCount--;
            cout<<"Deleted successfully.\n";
            return;
        }
    }
    cout<<"Student with ID "<<deleteId<<" not found.\n";
}

void showMenu(){
    cout<<"\n1. Add Student\n";
    cout<<"2. Display All Students\n";
    cout<<"3. Search by ID\n";
    cout<<"4. Update Student\n";
    cout<<"5. Delete Student\n";
    cout<<"6. Exit\n";
}

int main(){
    int choice;
    do{
        showMenu();
        cout<<"Choose: ";
        cin>>choice;
        switch(choice){
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: cout<<"Goodbye!\n"; break;
            default: cout<<"Invalid option. Try again.\n";
        }
    }while(choice!=6);
    return 0;
}

