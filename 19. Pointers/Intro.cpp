#include<bits/stdc++.h>
using namespace std;

// Pointers are variables that store the addresses of other variables

int main(){
    int a=10;
    int *aptr = &a;
    // Here it is an int because a is also an int value

    cout << &a << endl;
    cout << aptr << endl;
    cout << *aptr << endl;
    // Here using the * is called D-referencing

    *aptr = 20;
    cout << a << endl;
    // Here we changed the value of a without actually referencing it

    // We can also do basic arithmetic in pointers
    aptr++;
    cout << aptr << endl;
    return 0;
}