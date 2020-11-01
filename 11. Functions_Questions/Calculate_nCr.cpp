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
    cout << "Enter the n and the r respectively: ";
    int n,r;
    cin >> n >> r;

    int res = factorial(n)/ (factorial(r)* factorial(n-r));
    cout << "The answer is " << res << "\n";
}