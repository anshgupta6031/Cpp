                //  calculate the minimum number of bit flips to convert from one number to another.

//  NOTE :- minimum no. of bit flips required are the no. of different bits in both the numbers.
//  Which can be found by counting the set bits of the xor of both the numbers.



#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b;
    cout<<"Enter 2 integers : ";
    cin>>a>>b;

    cout << "The minimum no. of bit flips required is : " << __builtin_popcount (a ^ b);


    return 0;
}