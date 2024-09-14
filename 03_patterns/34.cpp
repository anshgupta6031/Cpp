/*
alter for decreasing number spiral................
(31.cpp)
*/



#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number : ";
    cin>>n;

    for (int i=1; i<=(2*n-1); i++){
        for (int j=1; j<=(2*n-1); j++){

            int a = i;      //   storing i and j values in a and b to protect the structure.
            int b = j;

            if (a>n){
                a = (2*n - i);
            }

            if (b>n){
                b = (2*n - j);
            }


            int x = min(a,b);

            cout<< (n-x+1);
        }

        cout<<endl;
    }


    return 0;
}