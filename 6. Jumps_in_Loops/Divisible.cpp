#include<iostream>

using namespace std;

int main(){
    cout << "This program will print all numbers except those that "
    "are divisible by 3";
    int endlimit;
    cout << "\n Enter a number: ";
    cin >> endlimit;

    for (int i = 0; i < endlimit; i++)    {
        if(i%3==0){
            continue;
        }
        cout << i << endl;
    }
    
    return 0;
}
