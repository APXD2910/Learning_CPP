#include<iostream>
#include<climits>
using namespace std;

int main(){
    cout << "This program will take an array from you and wil give" <<
    " maximum and minimum of that array\n";
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;
    int array[n];
    for(int i=0; i<n; i++){
        cout << "Enter a number: ";
        cin >> array[i];
    }

    int maxNo = INT_MIN, minNo = INT_MAX;
    for(int j=0; j<n; j++){
        maxNo = max(maxNo, array[j]);
        minNo = min(minNo, array[j]);
    }
    cout << "The maximum number is: " << maxNo << "\n";
    cout << "The minimum number is: " << minNo << "\n";

    return 0;
}