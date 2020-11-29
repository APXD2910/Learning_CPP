#include<iostream>
using namespace std;

int maze(int n, int x, int y){
    // Base Cases
    if(x==n-1 || y==n-1){
        return 1;
    }
    if(x>=n || y>=n){
        return 0;
    }

    return maze(n, x+1, y)+maze(n, x, y+1);
}

int main(){
    int n;
    cin>>n;

    cout << maze(n, 0 , 0) << endl;
    return 0;
}