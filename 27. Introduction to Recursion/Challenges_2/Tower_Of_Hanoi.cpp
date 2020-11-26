#include<iostream>
using namespace std;

void towerOfHanoi(int n, char src, char dest, char help){
	// Base Case
	if(n==0){
		return;
	}

	towerOfHanoi(n-1, src, help, dest);
	cout << "Move from " << src << " to " << dest << endl;
	towerOfHanoi(n-1, help, dest, src);
}

int main(){
	int n;
	char src, helper, destination;
	cin >> n >> src >> destination >> helper;
	towerOfHanoi(n, src, destination, helper);

	return 0;
}
