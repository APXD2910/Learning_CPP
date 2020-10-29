#include<iostream>

using namespace std;

int main(){
    /*This is a special type of loop which does not exist in python*/
    /*It is very similar to while loop*/
    int n;
    cin >> n;

    do{
        cout << n << endl;
        cin >> n;
    }while(n>0);

    return 0;
}
