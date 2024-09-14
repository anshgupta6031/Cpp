/*
star diamond..............

   *
  ***
 *****
*******
 *****
  ***
   *

output for n = 4;
*/



#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number : ";
    cin>>n;

    int a = 2*n - 1;

    for (int i=1; i<=a; i++){
        for (int j=1; j<=a; j++){       //  made a square shape of side 2n-1.

            if (((i+j)>=(n+1)) && ((i+j)<=(3*n - 1)) && ((i-j)<=(n-1)) && ((j-i)<=(n-1))){      //   these conditions are simply obtained by finding the equations of the boundary of the pattern and applying graphical approach.
                cout<<"*";                                                                      //   therefore, this method is less of brain, more of maths.
            }

            else{
                cout<<" ";
            }
        }

        cout<<endl;
    }


    return 0;
}