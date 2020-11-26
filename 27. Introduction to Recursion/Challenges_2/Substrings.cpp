#include<iostream>
using namespace std;

void subseq(string s, string ans){
    // Base Case
    if(s.length() == 0){
        cout << ans << endl;
        return;
    }
    string restOfStr = s.substr(1);

    // Recursive case
    subseq(restOfStr, ans);
    subseq(restOfStr, ans+s[0]);
}

int main(){
    string s;
    cin >> s;
    
    subseq(s, "");
    return 0;
}