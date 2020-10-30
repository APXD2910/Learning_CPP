#include<iostream>

using namespace std;

int main(){
    char button;
    cout << "Enter a character: " << endl;
    cin >> button;

    // *if (button=='a'){
    // *   cout << "Hello\n";
    // *  } else if (button=='b')    {
    //*     cout << "Namaste\n";
    //* }else if (button='c')
    //* {
    //*     cout << "Hola\n";
    //* }else if (button=='d')
    //* {
    //*     cout << "Konnichiwa\n"
    //* }else{
    //*     cout << "I am still learning more\n";
    //* }    
    
    // Instead of all this, we can use a switch statement
    
    switch (button)
    {
    case 'a':
        cout << "Hello\n";
        break;
    case 'b':
        cout << "Namaste\n";
        break;
    case 'c':
        cout << "Hola\n";
        break;
    case 'd':
        cout << "Konnichiwa\n";
        break;
    
    default:
    cout << "I am still learning more languages";
        break;
    }
    
    return 0;
}
