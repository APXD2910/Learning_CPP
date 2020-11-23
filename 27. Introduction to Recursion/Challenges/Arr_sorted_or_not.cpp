#include<iostream>
using namespace std;

bool sortedOrNot(int arr[], int n){
    // Base Condition
    if(n==1){
        return true;
    }

    bool restOfArray = sortedOrNot(arr+1, n-1);
    return((arr[0] < arr[1]) && restOfArray);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    cout << sortedOrNot(arr, 5) << endl;
    return 0;
}