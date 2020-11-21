#include<iostream>

using namespace std;

int c = 34;

int main(){
    int a,b;
    float d = 34.4;
    cout << "This program takes 2 numbers and returns their sum" << endl;
    cout<<"Enter the first number : "<<endl;
    cin>>a;
    cout<<"Enter the second number: "<<endl;
    cin>>b;
    
    c = a + b
    cout<<"The sum is "<<c;
    //Here we want to print the global c value

    cout<< "The global value of c is "<<::c;
    return 0;
}