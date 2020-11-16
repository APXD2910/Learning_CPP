#include<iostream>
using namespace std;

int GetBit(int n, int pos){
    return ((n&(1<<pos))!=0);
}

int main(){
    int n,pos;
    cin >> n>> pos;
    cout << GetBit(n,pos) << endl;
    return 0;
}