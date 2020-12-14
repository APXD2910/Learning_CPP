#include<iostream>
using namespace std;

class student{
    int salary;
    public:

    string name;
    int age;
    bool gender;

    // This is the default constructor
    student(){
        cout << "Default Constructor" << endl;
    }

    // This is the parmeterized constructor
    student(string n, int a, bool g, int s){
        cout << "Parameterized Constructor\n";
        name = n;
        age = a;
        gender = g;
        salary = s;
    }

    // Copy constructor (Basically the inheritence feature in python)
    student(student &a){
        name = a.name;
        gender = a.gender;
        age = a.age;
        salary = a.salary;
    }

    // Destructor function
    ~student(){
        cout << "Destructor function has been called\n";
    }
    // This gets called automatically when the main function ends

    void printInfo(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Salary: " << salary << endl;
    }
}
;

int main(){
    student a("Maulik", 14, 0, 2030103);
    a.printInfo();
    student b;

    student c = a;
    // student c(a); We can define like this also
    return 0;
}