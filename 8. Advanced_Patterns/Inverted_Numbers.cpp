#include<iostream>

using namespace std;

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;

    for(int i=1; i<=number; i++){
        for (int j=1; j<=number+1-i; j++){
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}