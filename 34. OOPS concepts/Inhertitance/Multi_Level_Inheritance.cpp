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

class C : public B {
    public:
        void funcC(){
            cout << "Function from class C\n";
        }
};

int main(){
    C obj;
    obj.funcA();
    obj.funcB();
    obj.funcC();
    return 0;
}