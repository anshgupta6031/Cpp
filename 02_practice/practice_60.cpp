//  stair path problem.............
//  there is a stair of n steps, a person wants to go to the top but he can do so by only taking either 1 step or 2 steps at a time, 
//  find out the no. of ways he can reach the top.

//  solved using recursion (logical approach) (By sir....)



#include <bits/stdc++.h>
using namespace std;


int solution (int n){
    if (n==2) return 2;
    else if (n==1) return 1;

    return solution(n-1) + solution(n-2);
}


int main(){

    int n;
    cout<<"Enter the no. of stairs : ";
    cin>>n;

    cout<<solution(n);

    return 0;
}


//  the time complexity is O(2**n).