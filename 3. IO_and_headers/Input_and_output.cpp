#include<iostream>
using namespace std;

int main()
{
    cout << "This program calculates the sum of 2 integers\n";

    int num1, num2, c;
    cout<<"Enter the value of First integer:";/*This is called Insertion operator*/
    cin>>num1;/*This is called Extraction operator*/

    cout<<"\nEnter the value of second integer:";
    cin>>num2;

    c = num1 + num2;
    cout<<"\nThe sum of the 2 integers is: "<<c;
    return 0;
}
