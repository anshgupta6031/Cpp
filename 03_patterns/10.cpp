/*
star cross..........
  12345
1 *   *                                            //   12345 are the markings for row and column number to find the relation.
2  * *
3   *
4  * *
5 *   *

output for n = 5.
where, n is always odd.
*/



#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number : ";
    cin>>n;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){

            if ((i==j) || ((i+j)==(n+1))){
                cout<<"*";
            }

            else{
                cout<<" ";
            }
        }

        cout<<endl;
    }



    return 0;
}