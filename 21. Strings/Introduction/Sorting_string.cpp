#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string st = "thisIsTheStringThatINeedToSort";
    sort(st.begin(), st.end());
    cout << st << endl;
    return 0;
}