/*
    DP can be applied on a problem if it satisfies the following conditions :-

    1)  There exist Repeating/Overlaping sub problems.
    2)  There is a optimal substructure :- i.e. if we have optimal answer of smaller subproblems, then by using them can we find optimal answer for the bigger problem or not.
*/

/*
    Steps to apply dp :-

    1)  Identify if dp can be applied.
    2)  Identify no. of unique states.
    3)  Identify the state of subproblem.
    4)  Update the sollution.
*/

//  Find fibbonacci n....


#include <bits/stdc++.h>
using namespace std;

vector<int> dp;


int fibo(int n){
    if(n==0 || n==1) return n;

    if(dp[n] != -1) return dp[n];       //  dp check to identify if problem was solved earlier.

    return dp[n] = fibo(n-1) + fibo(n-2);       //  storing answers...
}


int main(){

    int n;
    cout<<"enter n : ";
    cin>>n;

    dp.clear();                     //  clears the vector.....
    dp.resize(n+1, -1);             //  resizes the vector to n+1 with all values -1 symbolising that the i'th sub problem is not solved yet.

    cout<< fibo(n) <<endl;


    return 0;
}


//  T.C reduces from O(2^n) to O(n).
//  S.C remains same as O(n).

//  This is the top down approach(moving from a bigger problem to the smaller problem) of dp also known as momoization.
//  It is usually a recursive approach.
//  There is a chance of stack overflow.
//  Implementation is easier.



//    There is also an alternate approach called bottom up approach.
//    It is usually a itterative approach.
//    In this, we have to figure out the order of preparation of the sub problem, which make its implementation relativelly tough.
//    Stack overflow issue is resolved in this approach.
//    usually S.C can furthur be reduced.

