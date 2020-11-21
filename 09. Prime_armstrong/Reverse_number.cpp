#include<iostream>

using namespace std;

int main(){
    cout << "Enter a number: ";
    int number, new_number, last_digit;
    cin >> number;
    new_number = 0;

    while (number>0){
        last_digit = number % 10;
        new_number = new_number*10 + last_digit;
        number = number/10;
    }
    cout << "Your number is reversed as: " << new_number << "\n";
    
    return 0;
}
