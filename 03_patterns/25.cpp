/*
alter for star bridge........
*/



#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number : ";
    cin>>n;

    int nsp = 1;
    int nst = (n-1);

    for (int j=1; j<=(2*n-1);j++){
        cout<<"*";
    }

    cout<<endl;

    for (int i=1; i<=n; i++){

        for (int k=1; k<=nst; k++){
            cout<<"*";
        }

        for (int p=1; p<=nsp; p++){
            cout<<" ";
        }

        for (int q=1; q<=nst; q++){
            cout<<"*";
        }

        nst--;
        nsp+=2;

        cout<<endl;
    }


    return 0;
}