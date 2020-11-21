#include<iostream>

using namespace std;

int main(){
    /*This is a special type of loop which does not exist in python*/
    /*It is very similar to while loop*/
    cout << "This program will continue to take input rom you until you print a negative number\n";
    int n;
    cin >> n;

    do{
        cin >> n;
    }while(n>0);

    return 0;
}
