#include<iostream>
using namespace std;

// In this example, class c inherits from both class b and class a

class A{
    public:
        void funcA(){
            cout << "This is a function of class A\n";
        }
};

class B{
    public:
        void funcB(){
            cout << "This is a function of class B\n";
        }
};

class C : public A, public B{
    public:
        void funcC(){
            cout << "This is a function of class C\n";
        }
};

int main(){
    C obj;
    obj.funcA();
    obj.funcB();
    obj.funcC();
    return 0;
}