#include<iostream>
using namespace std;

int knapsack(int val[], int wt[], int n, int w){
    if(n==0 || w==0){
        return 0;
    }

    if(w-wt[n-1] < 0){
        return knapsack(val, wt, n-1, w);
    }
    return max(knapsack(val, wt, n-1, w-wt[n-1])+val[n-1], knapsack(val, wt, n-1 ,w));
}

int main(){
    // This one took me more than 30 minutes to figure out even after the hint
    int n, w;
    cin>>n>>w;
    int val[n];
    int wt[n];
    for(int i=0; i<n; i++){
        cin>>val[i];
    }
    for(int i=0; i<n; i++){
        cin>>wt[i];
    }
    cout << knapsack(val, wt, n, w) << endl;
    return 0;
}