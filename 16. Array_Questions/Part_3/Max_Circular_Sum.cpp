// This one is slightly difficult
// Max subarray sum - sum of non contributing elements
// So we reverse the array and use kadan's algorithm on it
#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n){
    int currentSum=0, maxSum=INT_MIN;
    for(int i=0; i<n; i++){
        currentSum += arr[i];
        if(currentSum<0){
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int wrapSum, nonWrapSum, totalSum=0;
    nonWrapSum = kadane(arr, n);

    // Reversing the sign of each of the elements of the array
    for(int i=0; i<n; i++){
        totalSum += arr[i];
        arr[i] = -arr[i];
    }

    wrapSum = totalSum + kadane(arr, n);
    cout << max(wrapSum, nonWrapSum) << endl;
    return 0;
}