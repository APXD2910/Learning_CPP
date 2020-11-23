#include<iostream>
using namespace std;

int lastOcc(int arr[], int n, int i, int key){
    // Base Condition
    if(i==n){
        return -1;
    }

    int restArr = lastOcc(arr, n, i+1, key);
    if(restArr != -1){
        return restArr;
    }
    if(arr[i] == key){
        return (i+1);
    }
    return -1;
}

int main(){
    int n, key;
    cin>>n>>key;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << lastOcc(arr, n, 0, key) << endl;
    return 0;
}