#include<iostream>
using namespace std;

// This one is extremely long
class A {
    public:
        void funcA(){
            cout << "Function form class A\n";
        }
};

class B : public A{
    public:
        void funcB(){
            cout << "Class B inherits from A\n";
        }
};

class C : public A{
    public:
        void funcC(){
            cout << "Class C inherits from A\n";
        }
};

class D : public B{
    public:
        void funcD(){
            cout << "Class D inherits from B\n";
        }
};

class E : public B{
    public:
        void funcE(){
            cout << "Class E inherits from B\n";
        }
};

class F : public C {
    public:
        void funcF(){
            cout << "Class F inherits from C\n";
        }
};

class G : public C {
    public:
        void funcG(){
            cout << "Class G inherits from C\n";
        }
};

int main(){
    cout << "Pretty cool, huh\n";
    return 0;
}