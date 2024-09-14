/*
number bridge........

1234567
123 567
12   67
1     7

output for n = 4.
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
        cout<<j;
    }

    cout<<endl;

    for (int i=1; i<=n; i++){

        int a=1;

        for (int k=1; k<=nst; k++){
            cout<<a;
            a++;
        }

        for (int p=1; p<=nsp; p++){
            cout<<" ";
            a++;
        }

        for (int q=1; q<=nst; q++){
            cout<<a;
            a++;
        }

        nst--;
        nsp+=2;

        cout<<endl;
    }


    return 0;
}