#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int number){
    int temp = 1;
    int ans = 0;
    while (temp <= number)
        temp *= 2;
    temp /= 2;

    while(temp > 0){
        int last_digit = number/temp;
        number -= last_digit * temp;
        temp /= 2;
        ans = ans*10 + last_digit;
    }
    return ans;    
}

int main(){
    cout << "Enter a decimal number and I will convert it to binary.";
    int number;
    cin >> number;

    cout << "This number in binary is " << 
    decimalToBinary(number) << "\n";
    return 0;
}