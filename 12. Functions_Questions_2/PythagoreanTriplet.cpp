#include<iostream>

// ! Make the code better
// TODO: Search google for how to find maximum of 3 numbers

using namespace std;

bool check(int num1, int num2, int num3){
    int a = max(num1, max(num2, num3));
    int b,c;

    if(a==num1){
        b = num2;
        c = num3;
    }
    if(a == num2){
        b = num1;
        c = num3;
    }
    else{
        b = num1;
        c = num2;
    }


    if(a*a == b*b + c*c){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    cout << "This program tells you whether thre  given numbers are " << 
    "pythagorean triplets or not.\n";
    cout << "Enter the numbers: ";
    int a, b, c, max, other, other2;
    cin >> a >> b >> c;

    if(check(a, b, c)){
        cout << "It is a pythagorean triplet";
    }
    else{
        cout << "Not a pythagorean triplet";
    }
    return 0;
}