// This one is cool
#include<iostream>
using namespace std;

int main(){
    // Taking array as input
    cout << "Enter the length of the array: ";
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Enter a number: ";
        cin >> arr[i];
    }

    // Doing the sorting stuff
    for(int i=1; i<n; i++){
        int current = arr[i];
        int j = i-1;
        while (arr[j]>current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

    // Returning the sorted array
    cout << "The sorted array is: \n";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}