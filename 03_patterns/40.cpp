/*
alter for pascal triangle.........
more optimized sollution.....

using :-   nC(r+1) = nCr * ( (n-r) / (r+1) )
           and as the first element is always 1 i.e. nC0.
           we put nCr as 1. i.e here current = 1.
*/



#include <iostream>
using namespace std;


int main(){

    int n;
    cout<<"enter a number : ";
    cin>>n;

    for (int i=0; i<=n; i++){
        int current = 1;
        for (int j=1; j<=(n-i); j++){
            cout<<" ";
        }

        for (int k=0; k<=i; k++){
            cout<< current <<" ";
            current = current * (i-k) / (k+1);          //    identity used as it reducess time complexity.
        }

        cout<<endl;
    }


    return 0;
}