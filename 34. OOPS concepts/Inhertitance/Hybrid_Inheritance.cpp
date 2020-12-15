#include<iostream>
using namespace std;

class A{
    public:
        void funcA(){
            cout << "Function from class A\n";
        }
};

class B : public A {
    public:
        void funcB(){
            cout << "Function from class B\n";
        }
};

class C {
    public:
        void funcC(){
            cout << "Function from class C\n";
        }
};

class D : public B, public C {
    public:
        void funcD(){
            cout << "Function from class D\n";
        }
};

int main(){
    D obj;
    obj.funcA();
    obj.funcB();
    obj.funcC();
    obj.funcD();
    return 0;
}