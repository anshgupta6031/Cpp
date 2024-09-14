                        //   Given an integer n, find the maximum power of 2 that is smaller than n.
                                        //  also find the minimum power of 2 that is greater than n.




#include <bits/stdc++.h>
using namespace std;


int max_power (int n){              //  Using Brian Kernighan's algorithm.
    int temp;

    while (n != 0){
        temp = n;
        n = n & (n-1);
    }

    return temp;
}


int max_power_2 (int n){        //  another method......
    n = n | (n >> 1);
    n = n | (n >> 2);
    n = n | (n >> 4);
    n = n | (n >> 8);
    n = n | (n >> 16);          //  now all bits(of a 32 bit integer) from the msb is set to 1. which gives n = (2^(x+1)) - 1, where x is the required power.

    return (n - 1) >> 1;
}


int main(){

    int n;
    cout<<"Enter an integer : ";
    cin >> n;

    cout << "The maximum power of 2 that is smaller than "<<n<<" is : "<< max_power(n)<<endl;
    cout << "The minimum power of 2 that is greater than "<<n<<" is : "<< max_power(n) * 2<<endl;

    cout << "The maximum power of 2 that is smaller than "<<n<<" is : "<< max_power_2(n)<<endl;


    return 0;
}