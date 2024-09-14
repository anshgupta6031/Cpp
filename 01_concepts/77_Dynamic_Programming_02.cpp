
//  Find fibbonacci n.... (Using bottom up approach)


#include <bits/stdc++.h>
using namespace std;


int fibo(int n){
    
    int a = 0;
    int b = 1;
    int c;

    if(n==0 || n==1) return n;

    for(int i=2; i<=n; i++){
        c = a+b;
        a = b;
        b = c;
    }

    return c;
}


int main(){

    int n;
    cout<<"enter n : ";
    cin>>n;

    cout<< fibo(n) <<endl;


    return 0;
}


//  T.C reduces from O(2^n) to O(n).
//  S.C reduces from O(n) to O(1).
