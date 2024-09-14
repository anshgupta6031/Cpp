                                                //  sum of 2 matrices.



#include <bits/stdc++.h>
using namespace std;


int main(){

    int a,b;

    cout<<"Enter number of rows of the matrices : ";
    cin>>a;

    cout<<"Enter the number of columns of the matrices : ";
    cin>>b;

    int m1[a][b];
    int m2[a][b];
    int sum[a][b];


    cout<<"enter the elements of the first matrix.\n";
    for (int i = 0; i<a; i++){
        for (int j = 0; j<b; j++){
            cin>>m1[i][j];
        }
    }


    cout<<"enter the elements of the second matrix.\n";
    for (int i = 0; i<a; i++){
        for (int j = 0; j<b; j++){
            cin>>m2[i][j];
        }
    }


    //  processing..........


    for (int i = 0; i<a; i++){
        for (int j = 0; j<b; j++){
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }


    //  display............

    cout<<endl<<"The sum of the matrices is :-"<<endl<<endl;

    for (int i = 0; i<a; i++){
        for (int j = 0; j<b; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}