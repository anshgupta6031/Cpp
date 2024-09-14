                    //  you are given a square matrix of size nxn. Change this matrix to its transpose.



#include <bits/stdc++.h>
using namespace std;


int main(){

    int n;

    cout<<"Enter order of the square matrix : ";
    cin>>n;

    int m[n][n];

    cout<<"enter the elements of matrix.\n";
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            cin>>m[i][j];
        }
    }
    

    //  processing..........


    for (int i = 0; i<n; i++){
        for (int j = 0; j<i; j++){
            int temp = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = temp;
        }
    }


    //  display............


    cout<<endl<<"The transpose of the matrix is :-"<<endl<<endl;

    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}