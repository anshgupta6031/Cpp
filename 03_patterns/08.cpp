/*
star plus.......

  *
  *
*****
  *
  * 

output for n = 5.
where, n is always odd.
*/



#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter an odd number : ";
    cin>>n;

    for (int i=1; i<=n; i++){

        if (i == ((n+1)/2)){
            for (int p=1; p<=n; p++){
                cout<<"*";
            }
        }

        else{
            for (int j=1; j<=(n/2); j++){
            cout<<" ";
            }
            cout<<"*";
        }

        cout<<endl;
    }


    return 0;
}