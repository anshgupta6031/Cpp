//  stair path problem.............
//  there is a stair of n steps, a person wants to go to the top but he can do so by only taking either 1 step or 2 steps at a time, 
//  find out the no. of ways he can reach the top.

//  solved using recursion (mathematical approach) (By me.......)



#include <bits/stdc++.h>
using namespace std;


int factorial (int n){
    int f = 1;
    for (int i=1; i<=n; i++) f *= i;

    return f;
}


int combination (int n, int r){
    int t;
    t = factorial(n) / (factorial(r) * factorial(n-r));
    return t;
}


int x;

int solution (int n, int p, int count, int i){
    if ((2*i)>n){
        x = count;
        return 0;
    }

    count += combination(p,i);

    solution (n, p-1, count, i+1);

    return x;
}


int main(){

    int n;
    cout<<"Enter the no. of stairs : ";
    cin>>n;

    cout<<solution(n,n,0,0);

    return 0;
}