#include<iostream>

using namespace std;

int factorial(int num1){
    int fact = 1;
    for(int i=2; i<=num1; i++){
        fact *= i;
    }
    return fact;
}
int main(){
    cout << "Enter 2 numbers: ";
    int a,b;
    cin >> a >> b;
    cout << factorial(a) << "\n";
    cout << factorial(b) << "\n";
    return 0;
}