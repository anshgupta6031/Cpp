                    //  print factorial of first n natural numbers and modulo the result by 10^9 + 7.




#include <bits/stdc++.h>
using namespace std;

vector <long long int> factorial (int n){

    vector <long long int> fact (n+1, 1);

    int mod = 1000000007;

    for (int i=2; i<=n; i++){
        fact[i] = ((fact[i-1] % mod) * (i % mod)) % mod;
    }

    return fact;

}

int main(){

    int n;
    cout<<"Enter the number upto whose factorial you want : ";
    cin>>n;
    cout<<endl<<endl;

    vector <long long int> fact = factorial(n);

    for (int i=0; i<=n; i++){
        cout<< i <<"! = "<< fact[i] <<endl;
    }


    return 0;
}