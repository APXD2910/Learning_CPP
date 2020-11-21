#include<iostream>

using namespace std;

int global_var = 56;
void sum(){
    int a;
}

int main(){
    int a = 45, b = 12;
    float pi = 3.14;
    char c = 'u';
    bool is_false = false;
    long double e = 12.33;
    cout << "This is tutorial 4.\nValue of a is "<<a<<".\nThe value of b is "<<b;
    cout << "\nThe value of pi is "<<pi;
    cout << "\nThe value of c is "<<c;
    cout <<"\nThis is a global variable: "<<global_var;
    cout << "\nThis is a boolean value with false: "<<is_false;
    cout << "\n The value of long double is "<<e;
    // is used to make comments in c++
    // If a global var and local var have the same name, local var is given more value
    return 0;
}