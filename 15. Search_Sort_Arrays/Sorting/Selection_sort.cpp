#include<iostream>
using namespace std;

int main(){
    cout << "Enter the length of the array: ";
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cout << "Enter a number: ";
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}