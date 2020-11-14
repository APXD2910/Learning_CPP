#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=10;
    int *aptr = &a;
    cout << *aptr << endl;

    int **ptr2 = &p;
    cout << *ptr2 << endl;
    cout << **ptr2 << endl;

    **ptr2 = 20;
    // Here we have Double D-Referenced
    return 0;
}