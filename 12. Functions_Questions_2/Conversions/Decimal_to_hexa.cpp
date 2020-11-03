#include<iostream>
using namespace std;

string decimalToHexa(int number){
    int temp = 1;
    string ans = "";
    while(temp <= number)
        temp *= 16;
    temp /= 16;

    while(temp > 0){
        int last_digit = number/temp;
        number -= last_digit * temp;
        temp /= 16;

        if(last_digit <= 9){
            ans = ans + to_string(last_digit);
        }
        else{
            char c = 'A' + last_digit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int main(){
    cout << "Enter a number and I will convert it into a hexadecimal number: ";
    int number;
    cin >> number;

    cout << "Your number in hexadecimal is: " << decimalToHexa(number) << "\n";
    return 0;
}