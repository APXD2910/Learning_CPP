#include<iostream>
using namespace std;

class exClass{
    public:
        void fun(){
            cout << "Function with no args\n";
        }

        void fun(int x){
            cout << "I am a function with int argument " << x << endl;
        }

        void fun(double x){
            cout << "I am a function with double " << x << " argument\n";
        }
};

int main(){
    exClass obj;
    obj.fun();
    obj.fun(7);
    obj.fun(9.23);
    return 0;
}