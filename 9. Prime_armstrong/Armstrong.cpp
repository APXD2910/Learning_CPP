#include<iostream>
#include<math.h>

using namespace std;

int main(){
    cout << "Enter a number: ";
    int number;
    cin >> number;

    int sum = 0;
    int OGnumber = number;

    while (number>0){
        int last_digit = number % 10;
        sum += pow(last_digit, 3);
        number = number/10; 
    }

    if(sum == OGnumber){
        cout << "armstrong number\n";
    }
    else{
        cout << "not an armstrong number\n";
    }
    return 0;
}