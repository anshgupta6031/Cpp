//  Make a power function using recursion logarithimically.



#include <bits/stdc++.h>
using namespace std;

int power(int x, int n){
    if (n==1) return x;

    int ans = power(x, (n/2));

    if (n%2 == 0) return ans * ans;
    else return ans * ans * x;
}


int main(){

    cout<< power(3,10);

    return 0;
}


//  here the time complexity is O(log n).
//  and space complexity is also O(log n).