// This one took 68 ms on my old laptop
#include<iostream>
using namespace std;

bool pairSum(int arr[], int n, int k){
    int low=0, high=n-1;
    
    while (low<high){
        if(arr[low]+arr[high]==k){
            cout << low << " " << high << endl;
            return 1;
        }
        else if(arr[low]+arr[high] > k){
            high--;
        }
        else if(arr[low]+arr[high] < k){
            low++;
        }
    }
    return 0;
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