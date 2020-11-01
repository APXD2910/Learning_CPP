// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

#include<iostream>

using namespace std;

int factorial(int num){
    int fact = 1;
    for(int i=2; i<=num; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    cout << "Enter a number: ";
    int number;
    cin >> number;

    for(int i=0; i<number; i++){
        for(int j=0; j<=i; j++){
            cout << factorial(i)/(factorial(j)*factorial(i-j)) << " ";
        }
        cout << "\n";
    }
    return 0;
}