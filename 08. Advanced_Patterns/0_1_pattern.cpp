#include<iostream>

using namespace std;

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    for(int i=1; i<=number; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2==0){
                cout << " 1";
            }
            else{
                cout << " 0";
            }
        }
        cout << "\n";
    }
    return 0;
}