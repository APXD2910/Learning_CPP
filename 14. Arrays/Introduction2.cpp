#include<iostream>
using namespace std;

int main(){ 
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;

    int array3[n];
    for(int i=0; i<n; i++){
        if(i==0){
            cout << "Enter the " << i+1 << "st value: ";
            cin >> array3[i];
        }
        else if(i==1){
            cout << "Enter the " << i+1 << "nd value: ";
            cin >> array3[i];
        }
        else if(i==2){
            cout << "Enter the " << i+1 << "rd value: ";
            cin >> array3[i];
        }
        else{
            cout << "Enter the " << i+1 << "th value: ";
            cin >> array3[i];
        }
    }
    cout << "Your array has been saved\n";
}