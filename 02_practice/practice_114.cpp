/*
Given a number n, count the no. of binary strings of length n, without consecutive ones recursivelly.
*/

/*
Sol)    The recursive relation is same as of fibonacci numbers but starts from 2 at n=1.
*/



#include <bits/stdc++.h>
using namespace std;

vector<int> dp;

int fibo(int n){
    if(n==1) return 2;
    if(n==2) return 3;

    if(dp[n] != -1) return dp[n];

    return dp[n] = fibo(n-1) + fibo(n-2);
}


int main(){

    int n;
    cout<<"enter n : ";
    cin>>n;

    dp.clear();
    dp.resize(n+1, -1);

    cout<< fibo(n) <<endl;


    return 0;
}