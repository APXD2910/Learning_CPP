#include<iostream>

using namespace std;

int main(){
    cout << "Enter a number: ";
    int number;
    cin >> number;

    /*Top part*/
    for(int i=1; i<=number; i++){
        for(int j=1; j<=number-i; j++){
            cout << "  ";
        }
        for(int j=1; j<=(2*i)-1; j++){
            cout << "* ";
        }
        cout << "\n";
    }

    /*Bottom part*/
    for(int i=number; i>=1; i--){
        for(int j=1; j<=number-i; j++){
            cout << "  ";
        }
        for(int j=1; j<=(2*i)-1; j++){
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}