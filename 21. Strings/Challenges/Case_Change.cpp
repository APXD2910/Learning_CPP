#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string st;
    cin >> st;

    // Convert into uppercase
    for(int i=0; i<st.size(); i++){
        if(st[i] >= 'a' && st[i] <= 'z'){
            st[i]-=32;
        }
    }
    cout << st << endl;

    // Into lowercase
    for(int i=0; i<st.size(); i++){
        if(st[i] >= 'A' && st[i] <= 'Z'){
            st[i]+=32;
        }
    }
    cout << st << endl;





    // Or we can do it this way
    transform(st.begin(), st.end(), st.begin(), ::toupper);
    cout << st << endl;

    transform(st.begin(), st.end(), st.begin(), ::towlower);
    cout << st << endl;
    return 0;
}