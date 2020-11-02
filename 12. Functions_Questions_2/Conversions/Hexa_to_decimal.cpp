#include<bits/stdc++.h>

using namespace std;

int hexaToDecimal(string number){
    int ans = 0;
    int x = 1;

    int sizeOfStr = number.size();
    for(int i=sizeOfStr-1; i>= 0; i--){
        if(number[i] >= '0'  && number[i] <= '9'){
            ans += x*(number[i] - '0');
        }
        else if(number[i] >= 'A' && number[i] <= 'F'){
            ans += x*(number[i]-'A' +10);
        }
        x *= 16;
    }
    return ans;
}

int main(){
    cout << "Enter an hexadecimal number: ";
    string number;
    cin >> number;

    cout << "Your number in decimal base system is: "
    << hexaToDecimal(number) << "\n";
    return 0;
}