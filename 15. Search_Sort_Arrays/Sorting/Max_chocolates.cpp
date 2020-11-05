// Problem statement:
// You have 15 rupees and you can buy 1 chocolate with 1 rupee
// but you can also buy 1 chocolate with 3 wrappers.
// Find maximum number of chocolates you can buy.

// To make this a little difficult, let us assume that we do not know number of ruppes 
// that we have and we have to write code for it
// This is very very easy problem

#include<iostream>
using namespace std;

int main(){
    cout << "How many rupees do you have? ";
    int n;
    cin >> n;
    int No_of_chocolates = n;
    No_of_chocolates += n/3;
    cout << "You can buy " << No_of_chocolates << " chocolates\n";
    cout << "You will have " << n%3 << " wrappers left";

    return 0;
}