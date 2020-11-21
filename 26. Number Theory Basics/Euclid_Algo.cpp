#include<iostream>
using namespace std;

int euclid(int n1,int n2){
    while (n2 != 0){
        int rem=n1%n2;
        n1 = n2;
        n2 = rem;
    }
    return n1;
}

int main(){
    // This one is very cool. I didn't know such a brilliant algo existed
    int n1, n2;
    cin >> n1 >> n2;
    cout << euclid(n1, n2) << endl;
    return 0;
}