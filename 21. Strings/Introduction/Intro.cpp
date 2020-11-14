#include<iostream>
#include<string>
using namespace std;

int main(){
    // This is one way
    string str1; cin >> str1;
    cout << str1 << endl;

    // This is another way
    char ch; cin>>ch;
    string str2(5, ch);
    cout << str2 << endl;

    // This is another way
    string str3 = "MaulikShah";
    cout << str3 << endl;

    // This is also another way to do it
    string str4;
    getline(cin, str4);
    cout << str4 << endl;

    // Concatenation of strings
    string s1="Maulik", s2="Shah";
    s1.append(s2);
    cout << s1 << endl;

    // We can also do it this way
    cout << s1+s2 << endl;
    return 0;
}