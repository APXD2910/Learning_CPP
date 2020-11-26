#include<iostream>
using namespace std;

void RemDuplicates(string s){
	// Base Case
	if(s.length()==0){
		return;
	}

	// Recursive Case
	if(s[0]==s[1]){
		RemDuplicates(s.substr(1));
	}
	else{
		cout << s[0];
		RemDuplicates(s.substr(1));
	}
}

int main(){
	string s;
	cin >> s;
	
	RemDuplicates(s);

	return 0;
}
