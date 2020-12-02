#include <bits/stdc++.h>

using namespace std;

int main(){
    int l, m, n;
    cin>>l >> m >> n;


    int** arr = new int*[l];
    
    for(int i=0; i<l; i++){
        arr[i] = new int [m];
    }

    for(int i=0; i<l; i++){
        for(int j=0; j<m; j++){
            arr[i][j] = new int [n];
        }
    }
    // And that is how we dynamically define a 3D array
    return 0;
}