#include<iostream>
using namespace std;

int game(int s, int e){
    // Base Cases
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }

    // Recursive Case
    int count=0;
    for(int i=0; i<=6; i++){
        count += game(s+i, e);
    }
    return count;
}

int main(){
    int s, e;
    cin>>s>>e;
    
    cout << game(s, e) << endl;
    return 0;
}