#include<iostream>
using namespace std;

/*Example: (For Reference in future) We have some friends who
have some attributes which we put in a class. Class is a
user-defined data type The parts of a class are called data
members. We make diferent objects of this class similar to python*/

class student{
    int salary; // This one is public

    public:
    // This is similar to the __init__ function in python

    string name;
    int age;
    bool gender;

    void setSalary(int n){
        salary = n;
    }
    // This is basically a setter function like in python

    void getSalary(){
        cout << salary << endl;
    }// This is a getter function

    void printInfo(){
        cout << "Name: ";
        cout << name << endl;
        cout << "Age: ";
        cout << age << endl;
        cout << "Gender: ";
        cout << gender << endl;
        cout << "Salary: ";
        cout << salary << endl;
    }
}
; // This ; is also very important

int main(){
    // student a;
    // a.name = "Maulik Shah"
    // a.age = 14
    // a.gender = 0 // Refers to male

    student arr[3];
    for(int i=0; i<3; i++){
        int n;
        cout << "Name: ";
        cin >> arr[i].name;
        cout << "Age: ";
        cin >> arr[i].age;
        cout << "Gender: ";
        cin >> arr[i].gender;
        cout << "Salary: ";
        cin >> n;
        arr[i].setSalary(n);
    }

    // Printing
    for(int i=0; i<3; i++){
        arr[i].printInfo();
    }
    return 0;
}