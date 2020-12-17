#include<iostream>
using namespace std;

class base{
    public:
    // Here the word virtual is very important
        virtual void print(){
            cout << "This is print function of base class\n";
        }

        void display(){
            cout << "This is the display function of base class\n";
        }
};

class derived : public base{
    public:
        void print(){
            cout << "This is print function of derived class\n";
        }

        void display(){
            cout << "This is the display function of derived class\n";
        }
};

int main(){
    base *baseptr;
    derived d;

    baseptr = &d;

    baseptr -> print();
    baseptr -> display();
    return 0;
}