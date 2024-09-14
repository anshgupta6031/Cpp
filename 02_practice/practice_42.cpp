                                //  sort the matrix such that each row and each columns are sorted.



#include <bits/stdc++.h>
using namespace std;


int main(){

    int a,b;

    cout<<"Enter number of rows of the matrix : ";
    cin>>a;

    cout<<"Enter the number of columns of the matrix : ";
    cin>>b;

    vector<vector <int>> m(a, vector<int> (b));

    cout<<"enter the elements of the matrix.\n";
    for (int i = 0; i<a; i++){
        for (int j = 0; j<b; j++){
            cin>>m[i][j];
        }
    }


    //  processing.............

    for (int k=0; k<a; k++){        //  sorting rows.
        for (int i=0; i<b; i++){
            for (int j=0; j<b-1; j++){
                if (m[k][j]>m[k][j+1]){
                    int temp = m[k][j];
                    m[k][j]=m[k][j+1];
                    m[k][j+1]=temp;
                }
            }
        }
    }


    for (int k=0; k<b; k++){        //  sorting columns.
        for (int i=0; i<a; i++){
            for (int j=0; j<a-1; j++){
                if (m[j][k]>m[j+1][k]){
                    int temp = m[j][k];
                    m[j][k]=m[j+1][k];
                    m[j+1][k]=temp;
                }
            }
        }
    }
    

    //  display...............
    

    cout<<endl<<endl;
    for (int i = 0; i<a; i++){
        for (int j = 0; j<b; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}