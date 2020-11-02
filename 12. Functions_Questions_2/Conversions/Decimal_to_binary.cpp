#include<bits/stdc++.h>

using namespace std;

int decimalToBinary(int number){
    int x = 1;
    int ans = 0;

    while(x >= number)
        x *= 2;
    x /= 2;
    
    while(x > 0){
        int last_digit = number / x;
        number -= last_digit*x;
        x /= 2;
        ans = ans*10 + last_digit;
    }
    return ans;
}

int main(){
    cout << "Enter a decimal number and it will return binary";
    int number;
    cin >> number;

    cout << "The number is binary form is " << decimalToBinary(number) << "\n";
    return 0;
}