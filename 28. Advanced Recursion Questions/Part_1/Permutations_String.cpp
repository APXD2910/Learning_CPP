#include<iostream>
using namespace std;

void permutation(string s, string ans){
    // Base Case
    if(s.length() == 0){
        cout << ans << endl;
        return;
    }

    // Recursive Case
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        string ros = s.substr(0, i)+s.substr(i+1);

        // Calling the function
        permutation(ros, ans+ch);
    }
}

int main(){
    string s;
    cin>>s;
    permutation(s, "");
    return 0;
}