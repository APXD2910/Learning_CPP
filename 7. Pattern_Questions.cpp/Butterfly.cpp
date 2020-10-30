#include<iostream>

using namespace std;

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;

    for(int i=1; i<=number; i++){
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        int no_of_spaces = 2*number - 2*i;
        for(int k=1; k<=no_of_spaces; k++){
            cout << "  ";
        }
        for(int l=1; l<=i; l++){
            cout << "* ";
        }
        cout << "\n";
    }

    for(int i=number; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        int no_of_spaces = 2*number - 2*i;
        for(int k=1; k<=no_of_spaces; k++){
            cout << "  ";
        }
        for(int l=1; l<=i; l++){
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}