#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
    int starting = 0;
    int ending = n;
    while(starting <= ending){
        int mid = (starting+ending)/2;
        if (arr[mid]==key){
            return mid;
        }
        else if(arr[mid] > key){
            ending = mid-1;
        }
        else{
            starting = mid+1;
        }
    }
    return -1;
}

int main(){
    /*It's the same concept as in python*/
    cout << "Enter the length of the array: ";
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Enter a number: ";
        cin >> arr[i];
    }
    int key;
    cout <<"Enter the value you want to search: ";
    cin >> key;


    cout << "Binary search results are coming...\n";
    cout << "The index of the value is: "<< BinarySearch(arr, n, key) << "\n";

    cout << "The time complexity of this is O(log2n)";
    return 0;
}