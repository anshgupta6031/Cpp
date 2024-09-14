                                                    //  leetcode 240.



#include <bits/stdc++.h>
using namespace std;

void display (vector<vector<int>> &m){
    int a = m.size();
    int b = m[0].size();

    cout<<endl<<endl;
    for (int i = 0; i<a; i++){
        for (int j = 0; j<b; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}


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


    //  pre processing.............

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
    
    display (m);


    //  main processing...................

    int target;
    cout<<"Enter the number you are searching : ";
    cin>>target;

    bool num = 0;

    // for (int i=0; i<a && m[i][0]<=target; i++){          //  this is a peace of shit which has more time complexity.
    //     for (int j=0; j<b && m[i][j]<=target; j++){
    //         if (m[i][j] == target){
    //             num = 1;
    //         }
    //     }
    // }


    
    int i = 0;
    int j = b-1;      //  starting from the upper right corner.

    while (j>=0 && i<a){
        if (m[i][j] == target){
            num = 1;
            break;
        }

        else if (m[i][j]>target){
            j--;
        }

        else{
            i++;
        }
    }


    if (num==1){
        cout<<"The number is present in the matrix."<<endl;
    }

    else{
        cout<<"The number is not present in the matrix."<<endl;
    }


    return 0;
}