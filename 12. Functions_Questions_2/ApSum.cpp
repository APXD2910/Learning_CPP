#include<iostream>

using namespace std;

void Calculate(int number){
    int sum;
    sum = (number*(number+1))/2;
    cout << sum;
}

int main(){
    cout << "Enter a number: ";
    int n;
    cin >> n;

    Calculate(n);
    return 0;
}