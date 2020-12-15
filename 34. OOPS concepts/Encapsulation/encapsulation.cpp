#include<iostream>
using namespace std;

class ex{
    public:
        int a;
        void funcA(){
            cout << "Function A\n";
        }
    
    private:
        int b;
        void funcB(){
            cout << "Function B\n";
        }

    protected:
        int c;
        void funcC(){
            cout << "Function C\n";
        }

}
;

int main(){
    ex obj;
    obj.funcA();
    obj.a = 23;

    // obj.funcB();
    // obj.funcC();

    // These 2 cannot be called

    return 0;
}