                                                //  transpose of a matrices.



#include <bits/stdc++.h>
using namespace std;


int main(){

    int a,b;

    cout<<"Enter number of rows of the matrix : ";
    cin>>a;

    cout<<"Enter the number of columns of the matrix : ";
    cin>>b;

    int m[a][b];
    int transpose[b][a];


    cout<<"enter the elements of matrix.\n";
    for (int i = 0; i<a; i++){
        for (int j = 0; j<b; j++){
            cin>>m[i][j];
        }
    }
    

    //  processing..........


    for (int i = 0; i<a; i++){
        for (int j = 0; j<b; j++){
            transpose[j][i] = m[i][j];
        }
    }


    //  display............

    cout<<endl<<"The transpose of the matrix is :-"<<endl<<endl;

    for (int i = 0; i<b; i++){
        for (int j = 0; j<a; j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}