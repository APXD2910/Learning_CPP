#include<iostream>

using namespace std;

int main(){
    cout << "This program takes 2 numbers as input and retirns their factorial\n";
    cout << "Enter the numbers: ";
    int n1, n2;
    cin >> n1 >> n2;

    int fact1=1;
    for(int i=2; i<=n1; i++){
        fact1 *= i;
    }
    int fact2 = 1;
    for(int j=2; j<=n2; j++){
        fact2 *= j;
    }
    cout << fact1 << " " << fact2 << endl;
    cout << "Here we can see that we have to write repetitive code.\n";
    cout << "Therefore we will use functions.\n";
    return 0;
}