#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int pointr, int key){
    // Base Condition
    if(pointr==n){
        return -1;
    }

    if(arr[pointr]==key){
        return (pointr+1);
    }
    return firstOcc(arr, n, pointr+1, key);
    
}

int main(){
    int n, key;
    cin>>n>>key;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << firstOcc(arr, n, 0, key) << endl;

    return 0;
}