#include<iostream>
#include<string>
using namespace std;

int main(){
    // This is how we use the index of a string
    string str1 = "vfnjsknvkmww";
    cout << str1[5] << endl;

    // Clear function
    string str2 = "jivjfnenvjsnvlkjhwerufednjkvn sv";
    str2.clear();

    // Comparing strings
    string str3 = "abc";
    string str4 = "xyz";
    cout << str3.compare(str4) << endl;
    // If 2 strings are equal, then we can use this and it is very helpful

    // Empty function;
    string str5 = "abc";
    str5.clear();
    if(str5.empty()){
        cout << "string is empty\n";
    }

    // Erase Function (VERY VERY USEFUL)
    string str6="Yo Man What's Up";
    str6.erase(3, 3);
    cout << str6 << endl;

    // Find Function
    string str7 = "Maulik Shah is a legend";
    cout << str7.find("is") << endl;

    // Insert function
    str7.insert(23, " LOL What a joke");
    cout << str7 << endl;

    // Length of string
    cout << str6.size() << endl;
    cout << str6.length() << endl;

    // Example of use of length
    for(int i=0; i<str7.length(); i++){
        cout << str7[i] << endl;
    }

    // If we want a substring of a string
    string str = str7.substr(6, 4);
    cout << str << endl;

    // String to integer function
    string str8 = "276438";
    int x = stoi(str8);
    cout << x+78529 << endl;

    // To String function
    int ex = 872549;
    cout << to_string(x) + "2" << endl;
    return 0;
}