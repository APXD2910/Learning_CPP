#include<iostream>

using namespace std;

bool pytha(int max; int n2; int n3){
    if(max*max = n2*n2 + n3*n3){
        return true;
    }
    else{
    return false;
    }
}

int main(){
    cout << "This program tells you whether thre  given numbers are " << 
    "pythagorean triplets or not.\n";
    cout << "Enter the numbers: ";
    int a, b, c, max, other, other2;
    cin >> a >> b >> c;
    if(a>b){
        if(a>c){
            max = a;
            other = b;
            other2 = c;
        }
    }
    else if(b>c){
        if(b>a){
            max = b;
            other = a;
            other2 = c;
        }
    }
    else{
        max = c;
        other = a;
        other = b;
    }
    if(pytha(max, other, other2)){
        cout << "They form a pythagorean triplet";
    }
    else{
        cout << "They do not form a pythagorean triplet";
    }
    return 0;
}