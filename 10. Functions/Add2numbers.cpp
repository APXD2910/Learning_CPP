#include<iostream>

using namespace std;

void print(int num){
    cout << num << endl;
    return;
}
int add(int num1, int num2){
    print(num1);
    cout << "+" << endl;
    print(num2);
    cout << "=";
    int sum = num1 + num2;
    return sum;
}

int main(){
    cout << "Enter 2 numbers: ";
    int a, b;
    cin >> a >> b;

    cout << "The sum is: \n" << add(a, b) << "\n";
    return 0;
}