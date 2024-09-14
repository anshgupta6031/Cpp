                                                //  print all prime numbers upto n.



#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n){
    if (n==1) return 0;

    for (int i=2; i<=sqrt(n); i++){
        if (n%i == 0) return 0;
    }

    return 1;
}

int main(){

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    if (n==0 || n==1) cout<< "No prime numbers found !"<<endl;

    for (int i=2; i<=n; i++){
        if (is_prime(i)){
            cout<< i << " ";
        }
    }


    return 0;
}



//  only the numbers which are perfect square have odd no. of factors. Rest all the numbers have even no. of factors.

//  half of the factors of any number lie before the sqrt of that number.

//  In a certain range there are less than (n/2) prime numbers.