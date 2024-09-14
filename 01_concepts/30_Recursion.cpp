    // when a function calls itself repeatedly, it is called recursion.

    //   A PROGRAM TO PRINT THE FACTORIAL OF AN ENTERED NUMBER USING RECURSION.



#include <bits/stdc++.h>
using namespace std;


int factorial(int a){

    if (a==1 || a==0){
        return 1;
    }

    else{
        return a * factorial(a-1);
    }
}


int main(){
 
    int p;
    cout<<"enter a number whose factorial you want to find out.\n";
    cin>>p;

    cout<<"The factorial of "<<p<<" is "<<factorial(p);

    return 0;
}


//  here Time complexity is O(n).
//  and Space complexity is O(n)stack frames.