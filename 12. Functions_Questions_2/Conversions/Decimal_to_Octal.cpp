#include<iostream>
using namespace std;

int decimalToOctal(int number){
    int temp = 1;
    int ans = 0;
    while (temp <= number)
        temp *= 8;
    temp /= 8;

    while(temp > 0){
        int last_digit = number/temp;
        number -= last_digit * temp;
        temp /= 8;
        ans = ans*10 + last_digit;
    }
    return ans;    
}

int main(){
    cout << "Enter a number and I will convert it to octal number: ";
    int number;
    cin >> number;

    cout << "The number in octal base is: " << decimalToOctal(number) << "\n";
    return 0;
}