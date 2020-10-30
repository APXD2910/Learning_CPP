#include<iostream>

using namespace std;

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;

    for(int i=number; i>0; i--){
        for(int j=i; j>0; j--){
            cout << "* ";
        }
    cout << "\n";
    }
    
    return 0;
}