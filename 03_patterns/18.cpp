/*
alter for star pyramid......

this method can be called nsp & nst method.
*/



#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number : ";
    cin>>n;

    int nsp = n-1;      //  nsp is number of spaces in each line which starts with n-1 in first line. It decrements by 1, every line.
    int nst = 1;        //  nst is number of stars in each line which starts with 1 in first line. It increments by 2, every line.

    for (int i=1; i<=n; i++){

        for (int j=1; j<=nsp; j++){     //   by this method condition is simplified.
            cout<<" ";
        }

        for (int k=1; k<=nst; k++){
            cout<<"*";
        }

        nsp--;
        nst+=2;
        cout<<endl;
    }



    return 0;
}