#include<iostream>
using namespace std;

int ispower(int n){
    return (n && !(n&n-1));
}

int main(){
    int n;
    cin >> n;
    cout << ispower(n) << endl;
    return 0;
}