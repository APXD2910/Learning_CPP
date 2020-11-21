#include<iostream>
using namespace std;

int div(int a, int b, int n){
    return ((n/a)+(n/b)-(n/(a*b)));
}

int main(){
    // How many numbers from 0 to 1000 are divisible by 5 or 7
    int a,b,n;
    cin >> n >> a >> b;
    cout << div(a,b,n) << endl;
    return 0;
}