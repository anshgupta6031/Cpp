                                            //  WAP to print a matrix in spiral form.
                                                    //  leetcode 54.
                                                 //  (spiral matrix 1)

    /*  input

    1->2-3
         |
    4->5 6
    |    |
    7<-8-9

    */

   /*   output
    
        1 2 3 6 9 8 7 4 5

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

    int au = 0;
    int bl = 0;
    int ad = a-1;
    int br = b-1;

    int count = 0;


    while(ad>=au && br>=bl){
        
        for (int j = bl; j<=br && count<a*b; j++){
        cout<<m[au][j]<<" ";
        count++;
        }
        au++;
    

        for (int i = au; i<=ad && count<a*b; i++){
        cout<<m[i][br]<<" ";
        count++;
        }
        br--;
    

        for (int j = br; j>=bl && count<a*b; j--){
        cout<<m[ad][j]<<" ";
        count++;
        }
        ad--;
    

        for (int i = ad; i>=au && count<a*b; i--){
        cout<<m[i][bl]<<" ";
        count++;
        }
        bl++; 
    }

    return 0;
}