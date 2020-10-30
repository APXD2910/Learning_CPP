#include<iostream>

using namespace std;

int main(){
    int number;
    cout << "This is a program to print a floyd's triangle\n";
    cout << "Enter a number: ";
    cin >> number;

    int count = 1;
    for(int i=1; i<=number; i++){
        for(int j=1; j<=i; j++){
            cout << count << " ";
            count++;
        }
    cout << "\n";
    }
    return 0;
}