#include<iostream>
using namespace std;

class A{
    public:
        void func(){
            cout << "This is a function of class A\n";
        }
};

// All public and protected data members of class A
// goes in class B as public data members
class B : public A{
};

int main(){
    B obj;
    obj.func();
    return 0;
}