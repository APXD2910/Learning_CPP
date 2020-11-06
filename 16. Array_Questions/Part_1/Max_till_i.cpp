// Given an array a[] of size n. For every i from 0 to n-1 output max
// (a[0], a[1], ... , a[i])

#include<iostream>
using namespace std;

int main(){
    int mx=-19999999;
    cout << "Enter length of array: ";
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Enter a number: ";
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        mx = max(mx, arr[i]);
    }
    cout << "Mamimum number is: "<< mx << "\n";
    return 0;
}