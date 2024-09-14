                                            //  WAP to print a matrix in wave form.
                                            
    /*  input

    1  2->3
    |  |  |
    4  5  6
    |  |  |
    7->8  9

    */

   /*   output
    
        1 4 7 8 5 2 3 6 9

   */




#include <bits/stdc++.h>
using namespace std;


int main(){

    int a,b;

    cout<<"Enter number of rows of the matrix : ";
    cin>>a;

    cout<<"Enter the number of columns of the matrix : ";
    cin>>b;

    int m[a][b];

    cout<<"enter the elements of matrix.\n";
    for (int i = 0; i<a; i++){
        for (int j = 0; j<b; j++){
            cin>>m[i][j];
        }
    }
    

    //  processing..........


    for (int j = 0; j<b; j++){
        if (j%2==0){
            for (int i = 0; i<a; i++){
                cout<<m[i][j]<<" ";
            }
        }
        
        else{
            for (int i = a-1; i>=0; i--){
                cout<<m[i][j]<<" ";
            }
        }
    }

    return 0;
}