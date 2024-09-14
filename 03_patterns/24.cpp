/*
star bridge.........

*******
*** ***
**   **
*     *

output for n = 4.
*/



#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number : ";
    cin>>n;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=(2*n-1); j++){
            if (((i+j)>(n+1)) && ((j-i)<(n-1))){        //   these conditions are simply obtained by finding the equations of the boundary of the pattern and applying graphical approach.
                cout<<" ";
            }

            else{
                cout<<"*";
            }
        }

        cout<<endl;
    }


    return 0;
}