//  stair path problem.............
//  there is a stair of n steps, a person wants to go to the top but he can do so by only taking either 1 step or 2 steps at a time, 
//  find out the no. of ways he can reach the top.

//  solved using loop.....



#include <bits/stdc++.h>
using namespace std;

int factorial (int n){
    int f = 1;
    for (int i=1; i<=n; i++) f *= i;

    return f;
}

int main(){

    int n;
    cout<<"Enter the no. of stairs : ";
    cin>>n;

    int count = 0;

    int p = n/2;

    for (int i=0; i<=p; i++){
        int t;
        t = factorial(n) / (factorial(i) * factorial(n-i));
        count += t;

        n--;
    }

    cout<<count;


    return 0;
}