#include<iostream>
#include<cmath>

using namespace std;

int main(){
    cout << "Enter a number: ";
    int number;
    cin >> number;

    bool flag=0;

    for(int i=2; i<=number; i++){
        if(number%i==0){
            cout << number << " is not a prime number";
            flag = 1;
            break;
        }
    }
    if(flag==0){
        cout << number << " is a prime number.";
    }
    return 0;
}