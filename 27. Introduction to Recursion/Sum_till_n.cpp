#include<iostream>
using namespace std;

int recurSum(int n){
    if(n==0){
        return 0;
    }

    int prevSum = recurSum(n-1);
    return n + prevSum;
}

int main(){
    int n;
    cin >> n;
    cout << recurSum(n)<< endl;
    return 0;
}