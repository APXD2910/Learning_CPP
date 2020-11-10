// This one took 165 ms to run in my old laptop
#include<iostream>
using namespace std;

bool pairSum(int arr[], int n, int k){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==k){
                cout << i << " " << j << endl;
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << pairSum(arr, n, k) << endl;
    return 0;
}