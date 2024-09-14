                                        //  function for permutation and combination.



#include <iostream>
using namespace std;


int factorial (int a){
    int f=1;
    for (int i=1; i<=a; i++){
        f*=i;
    }

    return f;
}


float permutation (int n, int r){
    return ( factorial(n) / factorial(n-r) );
}


float combination (int n, int r){
    return ( factorial(n) / (factorial(n-r) * factorial(r)) );
}


int main(){

    int n,r;

    cout<<"enter the value of n : ";
    cin>>n;
    cout<<"enter the value of r : ";
    cin>>r;

    cout<<"Permutation of "<<n<<" things taken "<<r<<" at a time is "<< permutation(n,r) <<endl;
    cout<<"Combination of "<<n<<" things taken "<<r<<" at a time is "<< combination(n,r) <<endl;


    return 0;
}