#include<iostream>

using namespace std;

int binaryToDecimal(int number){
    int ans = 0;
    int x = 1;

    while(number > 0){
        int last_digit = number % 10;
        ans += x * last_digit;
        x *= 2;
        number /= 10;
    }
    return ans;
}

int main(){
    cout << "Enter a binary number: ";
    int number;
    cin >> number;

    cout << "Your number can be written in decimal base system as "
    << binaryToDecimal(number) << "\n";
    return 0;
}