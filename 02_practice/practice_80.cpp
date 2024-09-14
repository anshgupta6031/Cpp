                                    //  Given an integer n, flip all its bits.



#include <bits/stdc++.h>
using namespace std;


int flip (int n){
    int p = n;

    p = p | (p >> 1);
    p = p | (p >> 2);
    p = p | (p >> 4);
    p = p | (p >> 8);
    p = p | (p >> 16);

    return n ^ p;       //  ^ represents xor bitwise operator.
}


int flip_2 (int n){             //  Using Brian Kernighan's algorithm.
    int p = n;

    int temp;
    while (p != 0){
        temp = p;
        p = p & (p-1);
    }

    temp = (temp << 1) - 1;       //  this makes all the bits of p as 1 (after the msb). i.e. lines (12 to 16) and (25 to 29) do the same thing.

    return n ^ temp;
}


int main(){

    int n;
    cout<<"Enter an integer : ";
    cin>>n;

    cout << "After fliping the bits the integer becomes : " << flip(n) <<endl;
    cout << "After fliping the bits the integer becomes : " << flip_2(n) <<endl;


    return 0;
}