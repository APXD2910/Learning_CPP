#include<iostream>
using namespace std;

class person{
    public:

    string name;
    int age;
    bool gender;

    bool operator == (person &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
    }

    void printInfo(){
        cout << "Name: ";
        cout << name << endl;
        cout << "Age: ";
        cout << age << endl;
        cout << "Gender: ";
        cout << gender << endl;
    }
}
;

int main(){
    person a;
    a.name = "Maulik";
    a.age = 14;
    a.gender = 0;

    person b;
    b.name = "Maulik";
    b.age = 14;
    b.gender = 0;

    if(a==b){
        cout << "They are the same\n";
    }
    else{
        cout << "They are not the same\n";
    }
    return 0;
}