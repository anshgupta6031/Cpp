/*
increasing number spiral...........

    1234321         //   this is our assumed pseudo variable used so that min(i,j) thing holds true in whole structure.
    1234567
1 1 1111111
2 2 1222221
3 3 1233321
4 4 1234321
3 5 1233321
2 6 1222221
1 7 1111111

output for n = 4.
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

            cout<< min(a,b);
        }

        cout<<endl;
    }


    return 0;
}