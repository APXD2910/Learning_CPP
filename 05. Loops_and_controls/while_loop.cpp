#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "This program will keep on taking inout from user until he " << 
    "enters a negative number" << endl;

    while (n>0){
        cout << n <<endl;
        cin >> n;
    }
    

    return 0;
}