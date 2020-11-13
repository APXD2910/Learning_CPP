#include<bits/stdc++.h>
using namespace std;

int main(){
    // We can sort of use arrays as pointers
    int arr[] = {10, 20, 30};
    cout << *arr << endl;
    // Here 10 gets printed which is our 0th element

    int *ptr = arr;
    for(int i=0; i<3; i++){
        cout << *ptr << endl;
        ptr++;
    }
    // This is also a way to print an array
    for(int i=0; i<3; i++){
        cout << *(arr+i) << endl;
    }
    return 0;
}