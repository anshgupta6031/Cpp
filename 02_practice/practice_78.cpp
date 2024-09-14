                            //  program to find the number of set bits for any integer n.
                    //  number of set bits is the number of 1's in the binary form of the integer.

                                    //  Using Brian Kernighan's algorithm.

//  When we subtract one from an integer(x), all the bits from (including) the rightmost (last) set bit are inverted in the binary form of x-1. whereas all the bits before the last set bit remain same as in the binary form of x.
//  and when we take & bitwise operation betwee x and x-1, one(last) set bit gets removed. so by doing this in a loop we can count the no. of set bits.




#include <bits/stdc++.h>
using namespace std;

int count_set_bits (int n){                  //  function for finding set bits.
    int count = 0;

    while (n != 0){
        n = n & (n-1);

        count++;
    }

    return count;
}

int main(){

    int n;
    cout<<"enter an integer : ";
    cin>>n;

    cout << __builtin_popcount(n) <<endl;      //  built in function for finding set bits.

    cout << count_set_bits(n) <<endl;


    return 0;
}