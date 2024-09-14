                                                        //  Leetcode 633
//  Given a non-negative integer c, decide whether there're two integers a and b such that a**2 + b**2 = c.



#include <bits/stdc++.h>
using namespace std;


bool isPerfectSquare (int n){       //  function to check if the no. is a perfect square.
        int root = sqrt(n);

        if ((root*root) == n) return true;
        else return false;
    }



bool judgeSquareSum(int c){
        
    int x = 0, y = c;       //  here, x = a**2 and y = b**2.

    while (y>=x){
        if (isPerfectSquare(x) && isPerfectSquare(y)) return true;

        else if (isPerfectSquare(y) != true){
            y = (int)sqrt(y) * (int)sqrt(y);
            x = c - y;
        }

        else if (!isPerfectSquare(x)){          //  another way doing similar to line 26.
            x = ((int)sqrt(x) + 1) * ((int)sqrt(x) + 1);
            y = c - x;
        }
    }

    return false;
}


int main(){

    int c;
    cout<<"Enter the value of c : ";
    cin>>c;

    if (judgeSquareSum(c)) cout<<"It is possible.";
    else cout<<"It is not possible.";
    
}