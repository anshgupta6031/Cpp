



#include <bits/stdc++.h>
using namespace std;

vector<int> dp;

int f(int n){                   //  Top Down........

    if(n == 0) return 0;
    if(n <= 9) return 1;

    if(dp[n] != -1) return dp[n];

    int x = INT_MAX;

    int p=1;
    while(n/p != 0){
        int z = (n/p) % 10;
        if(z != 0) x = min(f(n-z), x);
        p*=10;
    }

    return dp[n] = x+1;
}


int f1(int n){                          //  bottom up............
    dp[0] = 0;

    for(int i=1; i<=9; i++){
        dp[i] = 1;
    }


    for(int i=10; i<=n; i++){

        if(dp[i] != -1) return dp[i];

        int x = INT_MAX;

        int p=1;
        while(i/p != 0){
            int z = (i/p) % 10;
            if(z != 0) x = min(dp[i-z], x);
            p*=10;
        }

        dp[i] = x+1;
    }

    return dp[n];
}


int main(){


    int n;
    cin>>n;

    dp.clear();
    dp.resize(n+10, -1);

    cout << f1(n) <<endl;

    return 0;
}