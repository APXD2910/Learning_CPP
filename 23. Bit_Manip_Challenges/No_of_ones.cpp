#include<iostream>
using namespace std;

int No_of_ones(int n){
    int count=0;
    while (n) {
        n = n&(n-1);
        count++;
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    cout << No_of_ones(n) << endl;
    return 0;
}