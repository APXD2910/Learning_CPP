#include<iostream>

using namespace std;

int main(){
    float n1, n2;
    cout << "Enter 2 numbers: ";
    cin >> n1 >> n2;

    char op;
    cout << "Enter the operator: ";
    cin >> op;

    switch (op){
    case '+':
        cout << n1+n2<<"\n";
        break;
    case '-':
        cout << n1-n2<<"\n";
        break;
    case '*':
        cout << n1*n2<<"\n";
        break;
    case '/':
        cout << n1/n2<<"\n";
        break;
    
    default:
    cout << "Not a valid operator";
        break;
    }
    return 0;
}