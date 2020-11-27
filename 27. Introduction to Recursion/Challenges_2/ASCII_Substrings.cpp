#include<iostream>
using namespace std;

void ascii_subseq(string s, string ans){
	// Base Case
	if(s.length()==0){
		cout << ans << endl;
		return;
	}
	
	string ros = s.substr(1);
	int ch = s[0];
	ascii_subseq(ros, ans);
	ascii_subseq(ros, ans+s[0]);
	ascii_subseq(ros, ans+to_string(ch));
}

int main(){
	string s;
	cin>>s;
	ascii_subseq(s, "");
	return 0;
}
