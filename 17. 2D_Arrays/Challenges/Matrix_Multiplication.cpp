#include<bits/stdc++.h>
using namespace std;

int main(){
    // I have not studied matrix stuff in school so this is slightly difficult for me
    // Here goes the code

    /*Inputs*/
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int m1[n1][n2];
    int m2[n2][n3];
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            cin >> m1[i][j];
        }
    }
    for(int i=0; i<n2; i++){
        for(int j=0; j<n3; j++){
            cin >> m2[i][j];
        }
    }

    /*Initializing the answer array*/    
    int ans[n1][n3];
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            ans[i][j]=0;
        }
    }

    /*Main Logic of program*/
    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            for(int k=0; k<n2; k++){
                ans[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }

    /*Output*/
    for(int i=0; i<n1; i++){
        for (int j = 0; j < n3; j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}