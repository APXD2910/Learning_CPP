#include<iostream>
using namespace std;

int LinearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if (arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    cout << "Enter the length of the array: ";
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Enter a number: ";
        cin >> arr[i];
    }

    int key;
    cout << "Enter the number which you want to find: ";
    cin >> key;

    cout << LinearSearch(arr, n, key) << "\n";

    cout << "The time complexity of this is O(n)";
    return 0;
}