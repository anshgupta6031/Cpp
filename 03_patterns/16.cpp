/*
rhombus.......

   ****
  ****
 ****
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

        for (int k=1; k<=n; k++){
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}