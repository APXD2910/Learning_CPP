#include<iostream>
using namespace std;

int frens(int n){
    if(n==0 || n==1 || n==2){
        return n;
    }
    return (frens(n-1)+frens(n-2)*(n-1));
}

int main(){
    int n;
    cin>>n;

    cout << frens(n) << "\n";
    return 0;
}