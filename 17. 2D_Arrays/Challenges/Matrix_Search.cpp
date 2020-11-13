#include<bits/stdc++.h>
using namespace std;

int main(){
    // This one is quite cool, just like binary search
    int n, m, target;
    cin >> n >> m;
    cin >> target;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    int r=0, c=m-1;
    bool flag=false;
    while(r<m && c>=0){
        if(a[r][c] == target){
            flag=true;
        }
        if(a[r][c] > target){
            c--;
        }
        else{
            r++;
        }
    }
    if(flag){
        cout << true;
    }
    else{
        cout << false;
    }
    
    return 0;
}