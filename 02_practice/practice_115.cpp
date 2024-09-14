/*
Given n friends, each one can remain single or can pair with some other friend.
Each friend can be paired only once. Find out the total number of ways in which friends can remain single or can be paired up.
*/


#include <bits/stdc++.h>
using namespace std;

vector<int> dp;

int person(int n){
    if(n==1) return 1;
    if(n==2) return 2;

    if(dp[n] != -1) return dp[n];

    return dp[n] = person(n-1) + (n-1) * person(n-2);           //  this is the recurence relation which this question follows.
}


int main(){

    int n;
    cout<<"enter n : ";
    cin>>n;

    dp.clear();
    dp.resize(n+1, -1);

    cout<< person(n) <<endl;


    return 0;
}