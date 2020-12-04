#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Defining a vector
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // Printing a vector
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << "\n";

    // Another way of printing using an iterator
    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end(); it++){
        cout << *it << " ";
    }
    cout << "\n";

    // Another way of traversing through a vector
    for(auto element:v){
        cout << element << " ";
    }
    cout << "\n";

    // pop_back
    v.pop_back();
    
    // We can define a vector like this also
    vector<int> v2 (3, 10);
    // v2 is 10, 10, 10

    // Swap function
    swap(v, v2); // v1=v2 adn v2=v1
    

    // sort function
    sort(v.begin(), v.end());
    return 0;
}