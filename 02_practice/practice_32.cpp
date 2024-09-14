                                                //  multiplication of 2 matrices.



#include <bits/stdc++.h>
using namespace std;


int main(){

    int a,b,c,d;

    do{
        cout<<"Enter number of rows of first matrix : ";
        cin>>a;
    
        cout<<"Enter the number of columns of first matrix : ";
        cin>>b;
    
        cout<<"Enter number of rows of second matrix : ";
        cin>>c;
    
        cout<<"Enter the number of columns of second matrix : ";
        cin>>d;
    
        if (b!=c){
            cout<<"MULTIPLICATION NOT POSSIBLE.\n ENTER THE DATA AGAIN.\n\n";
        }
    
    }while(b!=c);


    int m1[a][b];
    int m2[c][d];
    int product[a][d];


    cout<<"enter the elements of the first matrix.\n";
    for (int i = 0; i<a; i++){
        for (int j = 0; j<b; j++){
            cin>>m1[i][j];
        }
    }


    cout<<"enter the elements of the second matrix.\n";
    for (int i = 0; i<c; i++){
        for (int j = 0; j<d; j++){
            cin>>m2[i][j];
        }
    }


    //  processing..........


    for (int i = 0; i<a; i++){
        for (int j = 0; j<d; j++){
            int s = 0;
            for (int k=0; k<b; k++){
                s += m1[i][k] * m2[k][j];
                product[i][j] = s;
            }
        }
    }


    //  display............
    

    cout<<endl<<"The product of the matrices is :-"<<endl<<endl;

    for (int i = 0; i<a; i++){
        for (int j = 0; j<d; j++){
            cout<<product[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}