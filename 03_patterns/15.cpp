/*
alter for flipped star triangle........

  1234
1    *                                            //   1234 are the markings for row and column number to find the relation.
2   **
3  ***
4 ****

output for n = 4.
*/



#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number : ";
    cin>>n;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){

            if ((i+j)<=n){
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