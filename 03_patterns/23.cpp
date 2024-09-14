/*
alter for star diamond..........
by nsp & nst method.....
*/



#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number : ";
    cin>>n;

    int a = 2*n-1;

    int nsp = n-1;
    int nst = 1;

    for (int i=1; i<=a; i++){

        for (int j=1; j<=nsp; j++){
            cout<<" ";
        }

        for (int k=1; k<=nst; k++){
            cout<<"*";
        }

        if (i<n){
            nsp--;
            nst+=2;
        }

        else{
            nsp++;
            nst-=2;
        }

        cout<<endl;
    }


    return 0;
}