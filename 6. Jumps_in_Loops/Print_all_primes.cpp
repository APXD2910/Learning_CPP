#include<iostream>

using namespace std;

int main(){
    cout << "This program will print all prime numbers between 2 given numbers";
    cout << "\nEnter first number: ";
    int a, b;
    cin >> a;
    cout << "\nEnter second number: ";
    cin >> b;

    for (int num = a; num <= b; num++){
        int i;
        for(int i = 2; i < num; i++){
            if(num%i==0){
                break;
            }
        }
        if (i==num){
            cout << num << "\n";
        }
    }
    return 0;
}