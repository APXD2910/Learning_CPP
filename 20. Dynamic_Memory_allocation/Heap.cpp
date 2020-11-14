#include<iostream>
using namespace std;

int main(){
    int a=10;     //This is stored in memory stack
    int *p = new int(); // Allocate memory in heap
    // * Point to note: It is not directly stored,
    // * it is more like a pointer

    *p=10;
    delete(p); // Delaaocate the memory manually. This is necessary
    // Here the pointer is not deleted and is called a dangling pointer

    p = new int[4]; // This is syntax for an array

    delete[]p; // Deallocate the array from memory
    p=NULL; // Delete the dangling pointer
    return 0;
}