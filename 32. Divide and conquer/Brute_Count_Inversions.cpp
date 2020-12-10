#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // BRUTE FORCING SOLUTION WITH O(N^2) TIME COMPLEXITY

    int inv=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                inv += 1;
            }
        }
    }
    cout << inv << endl;
    return 0;
}