#include<bits/stdc++.h>
using namespace std;

int main(){
    char arr[100] = "apple";
    int i=0;

    while (arr[i] != '\0'){
        cout << arr[i] << "\n";
        i++;
    }

    char arr2[100];
    cin >> arr2;
    cout << arr2[4];    
    return 0;
}