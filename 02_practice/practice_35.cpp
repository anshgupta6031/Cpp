                                    //  WAP to rotate a matrix by 90 degrees clockwise.
                                    //  leetcode 48.



#include <bits/stdc++.h>
using namespace std;


int main(){

    int a,b;

    cout<<"Enter number of rows of the matrix : ";
    cin>>a;

    cout<<"Enter the number of columns of the matrix : ";
    cin>>b;

    int m[a][b];
    int rotate[b][a];


    cout<<"enter the elements of matrix.\n";
    for (int i = 0; i<a; i++){
        for (int j = 0; j<b; j++){
            cin>>m[i][j];
        }
    }
    

    //  processing..........


    for (int i = 0; i<b; i++){          //  transposing.........
        for (int j = 0; j<a; j++){
            rotate[i][j] = m[j][i];
        }
    }

    for (int i = 0; i<b; i++){          //  reversing each row.........
        for (int j = 0; j<a/2; j++){
            int temp = rotate[i][j];
            rotate[i][j] = rotate[i][a-j-1];
            rotate[i][a-j-1] = temp;
        }
    }


    //  display............

    cout<<endl<<"The rotated matrix is :-"<<endl<<endl;

    for (int i = 0; i<b; i++){
        for (int j = 0; j<a; j++){
            cout<<rotate[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}