#include<iostream>
using namespace std;

int main(){
    // cout << "Array is basically the same as list in python.\n" <<
    // " But it has a difference that the variables must be of the same type";

    // * Syntax is 
    // * dataType arrayName[size];
    // * Example:
    // * int array[4] = {10, 20, 30, 40};

    // * Array's size is sizeOf(dataType)*LengthOfArray;

    // cout << "The indexing is same as in python starting from 0";



    int array[4];
    array[0]=10;
    array[1]=20;
    array[2]=30;
    array[3]=40;

    int array2[4]={10, 20, 30, 40};
    cout << array[3] << "\n";
    cout << array2[1] << "\n";
    return 0;
}