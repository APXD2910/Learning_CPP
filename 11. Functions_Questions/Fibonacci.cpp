#include<iostream>

using namespace std;

/*I have aldready done the factorial function so I'm not doing it again*/

void fibonacii(int n){
    int t1=1;
    int t2=1;
    int nextTerm;

    for(int i=1; i<=n; i++){
        cout << t1 << ", ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}
int main(){
    cout << "Enter a number and the program will print fibonacci numbers" << 
    " that number\n";
    int a;
    cin >> a;

    fibonacii(a);

    return 0;
}