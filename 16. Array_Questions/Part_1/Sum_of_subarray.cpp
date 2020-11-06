#include<iostream>
using namespace std;

int main(){
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Enter a number: ";
        cin >> arr[i];
    }

    int curr_sum = 0;
    for(int i=0; i<n-1; i++){
        for(int j=i; j<n-1; j++){
            curr_sum += arr[j];
        }
    }
    cout << "The sum of subarrays is: " << curr_sum;
    return 0;
}