#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "This program will print the sum of all the numbers till given number";
    cout << "Enter your number: ";
    cin >> n;

    int sum = 0;
    for (int counter = 1; counter <= n; counter++)    {
        sum = sum + counter;
    }
    cout <<"The sum is: " << sum;
    return 0;
}
