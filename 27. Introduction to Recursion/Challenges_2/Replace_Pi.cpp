#include<iostream>
using namespace std;

void ReplacePi(string s){
	// Base Case
	if(s.length()==0){
		return;
	}

	// Recursive Case
	if(s[0]=='p' && s[1]=='i'){
		cout << "3.14";
		ReplacePi(s.substr(2));
	}
	else{
		cout << s[0];
		ReplacePi(s.substr(1));
	}
}

int main(){
	string s;
	cin >> s;
	ReplacePi(s);
	cout << "\n";
	return 0;
}
