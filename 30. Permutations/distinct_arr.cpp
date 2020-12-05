#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> ans;

void permute(vector<int> &a, int idx){
	// Base Case
	if(idx == a.size()){
		ans.push_back(a);
		return;
	}

	// Recursive case
	for(int i=idx; i<a.size(); i++){
		swap(a[i], a[idx]);
		permute(a, idx+1);
		swap(a[i], a[idx]);
	}
	return;
}


int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(auto &i:a){
		cin>>i;
	}

	permute(a, 0);

	// Printing
	for(auto v:ans){
		for(auto i:v){
			cout << i << " ";
		}
		cout << "\n";
	}
	return 0;
}