/*
flipped star triangle..........

   *
  **
 ***
****

output for n = 4.
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
            cout<<"*";                      //   put, cout<<k; to get a flipped number triangle.
        }

        cout<<endl;
    }

    return 0;
}