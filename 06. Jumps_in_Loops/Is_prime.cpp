#include<iostream>

using namespace std;

int main(){
    int num;
    cout << "This program tells you whether a given number is prime or not\n";
    cout << "Enter your number: \n";
    cin >> num;

    int i;
    for (i = 2; i < num; i++){
        if (num%i==0){
            cout << num << " is not prime\n";
            break;
        }
    }
    if (i == num){
        cout << num << " is a prime number\n";
    }
    return 0;
}