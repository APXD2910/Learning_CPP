#include<iostream>

using namespace std;

int main(){
    /*This is actually a very dificult one*/
    cout << "Enter a number: ";
    int number;
    cin >> number;

    for(int i=1; i<=number; i++){
        int j;
        for (j=0; j<=number-i; j++){
            cout << "  ";
        }
        int k=i;
        for(; j<=number; j++){
            cout << k-- << " ";
        }
        k = 2;
        for(;j<=number+i-1; j++){
            cout << k++ << " ";
        }
        cout << "\n";
    }
    return 0;
}