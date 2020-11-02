#include<iostream>

using namespace std;

int octalToDecimal(int number){
    int ans = 0;
    int x = 1;

    while(number > 0){
        int last_digit = number % 10;
        ans += x*last_digit;
        x *= 8;
        number /= 10;
    }
    return ans;
}

int main(){
    cout << "Enter an octal number: ";
    int number;
    cin >> number;

    cout << "Your number in decimal base system is: "
    << octalToDecimal(number) << "\n";
    return 0;
}