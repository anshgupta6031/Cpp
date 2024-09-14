/*
alter for palindrome number pyramid........
i.e 19.cpp
*/



#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number : ";
    cin>>n;

    for (int i=1; i<=n; i++){

        for (int j=1; j<=(n-i); j++){
            cout<<" ";
        }

        for (int k=1; k<=i; k++){
            cout<<k;
        }
                                                    //  it could also be :-
        for (int p=2; p<=i; p++){                   //  for (int p=(i-1); p>=1; p--){
            cout<<(i-p+1);                          //  cout<<p; }
        }

        cout<<endl;
    }


    return 0;
}