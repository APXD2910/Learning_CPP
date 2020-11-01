#include<iostream>
#include<math.h>

using namespace std;

bool is_prime(int num){
    for(int i=2; i<=sqrt(num); i++){
        if(num % i == 0){
            return false;
            break;
        }
    }
    return true;
}

int main(){
    cout << "Enter two numbers: ";
    int a,b;
    cin >> a >> b;

    for(int j=a; j<=b; j++){
        if(is_prime(j)){
            cout << j << "\n";
        }
    }
    return 0;
}