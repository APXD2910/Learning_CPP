#include<bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n){
    int k=arr[0];
    for(int i=0; i<n; i++){
        k = max(k, arr[i]);
    }

    // Making an array
    int count[10] = {0};
    for(int i=0; i<n; i++){
        count[arr[i]]++;
    }

    // Modifying the count array
    for(int i=1; i<=k; i++){
        count[i] += count[i-1];
    }

    // Making an output array and doing the actual sort
    int output[n] = {0};
    for(int i=n-1; i>=0; i--){
        output[--count[arr[i]]] = arr[i];
    }

    // Making the output array into the original array
    for(int i=0; i<n; i++){
        arr[i] = output[i];
    }
}

int main(){
    // Taking input
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    countSort(arr, n);

    // Printing
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}