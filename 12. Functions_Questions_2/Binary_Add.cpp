#include<iostream>
using namespace std;

int reverse(int n){
    int ans = 0;
    while (n >0){
        int last_digit = n &10;
        ans = ans*10 + last_digit;
        n /= 10;
    }
    return ans;
}

int binaryAdd(int n1, int n2){
    int ans = 0;
    int prev_carry = 0;

    while (n1>0 && n2>0){
        if(n1%2==0 && n2%2==0){
            ans = ans*10 + prev_carry;
            prev_carry = 0;
        }
        else if(n1%2==0 && n2%2==1){
            if(prev_carry==1){
                ans = ans*10 +0;
                prev_carry = 1;
            }
            else{
                ans = ans*10 + 1;
                prev_carry = 0;
            }
        }
        else{
            ans = ans*10 + prev_carry;
            prev_carry = 1;
        }
        n1 /= 10;
        n2 /= 10;
    }   
    while (n1 > 0){
        if(prev_carry == 1){
            if(n1%2 == 1){
                ans = ans*10;
                prev_carry = 1;
            }
            else{
                ans = ans*10 + 1;
                prev_carry = 0;
        }
    }
        else{
            ans = ans*10 + (n1%2);
        }
    n1 /= 10;
    }

    while (n2 > 0){
        if(prev_carry == 1){
            if(n2%2 == 1){
                ans = ans*10;
                prev_carry = 1;
            }
            else{
                ans = ans*10 + 1;
                prev_carry = 0;
        }
    }
        else{
            ans = ans*10 + (n2%2);
        }
    n2 /= 10;
    }
    if(prev_carry == 1){
        ans = ans*10 + 1;
    }
    ans = reverse(ans);
    return ans;
}

int main(){
    cout << "Enter the first binary number: ";
    int num1;
    cin >> num1;

    cout << "Enter the second number: ";
    int num2;
    cin >> num2;

    cout << "The sum of these 2 numbers is: " << binaryAdd(num1, num2) << "\n";
    return 0;
}