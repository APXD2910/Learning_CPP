#include<iostream>

using namespace std;

int main(){
    int a;
    cout << "This is a simple program to tell whether a given number is even or odd" << endl;
    cout << "Enter your number: ";
    cin >> a;

    if (a%2 == 0)    {
        cout << a << " is an even number";
    } else{
        cout << a << " is an odd number";
    }
    
    return 0;
}
