#include<iostream>
using namespace std;

int main(){
    // Input the array
    cout << "Enter the number of elements in array: ";
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cout << "Enter a number: ";
        cin >> arr[i];
    }

    // Doing the sorting
    int counter=1;
    while(counter < n){
        for(int i=0; i<n-counter; i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }

    // Returning the sorted array
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}