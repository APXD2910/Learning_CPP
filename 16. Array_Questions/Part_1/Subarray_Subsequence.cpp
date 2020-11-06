#include<iostream>
#include<cmath>
using namespace std;

int main(){
    cout << "Enter the length of the array: ";
    int n;
    cin >> n;

    cout << "There can be " << n*(n+1)/2 << " subarrays from" <<
    " this array\n";
    cout << "There can be " << pow(2, n) << " subsequences from "<< 
    "this array\n";
    return 0;
}