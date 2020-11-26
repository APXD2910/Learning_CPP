#include<iostream>
using namespace std;

int ans=0;

string Move_all_x(string s){
    // Base Case
    if(s.length() == 0){
        return "";
    }
    string ans=Move_all_x(s.substr(1));

    if(s[0] == 'x'){
        return ans+s[0];
    }
    return s[0]+ans;
}

int main(){
    string s;
    cin >> s;

    cout << Move_all_x(s) << endl;
    return 0;
}