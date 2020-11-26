#include<iostream>
using namespace std;

void Reverse(string s){
	// Base Case
	if(s.length()==0){
		return;
	}

	// Recursive Case
	string rest_of_str = s.substr(1);
	Reverse(rest_of_str);
	cout << s[0];
}

int main(){
	string s;
	cin >> s;

	Reverse(s);
	cout << "\n";
	return 0;
}
