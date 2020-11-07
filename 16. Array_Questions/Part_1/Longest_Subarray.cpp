#include<iostream>
using namespace std;

int main(){
    // Constraints have to be kept in mind always
    // It has really started to become difficult
    // This question was in Google Kickstart round G
    int t;
    cin >> t;
    for(int k=0; k<t; k++){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int ans=2;
        int pd=a[1]-a[0];
        int j=2;
        int curr=2;

        while (j<n){
            if(pd == a[j]-a[j-1]){
                curr++;
            }
            else{
                pd = a[j] - a[j-1];
                curr = 2;
            }
            ans = max(ans,curr);
            j++;
        }
        cout << ans << "\n";
    }
    return 0;
}