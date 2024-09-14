                                                        //  leetcode 861.
        
           /* You are given an m x n binary matrix grid.

A move consists of choosing any row or column and toggling each value in that row or column 
(i.e., changing all 0's to 1's, and all 1's to 0's).
Every row of the matrix is interpreted as a binary number, and the score of the matrix is the sum of these numbers.
Return the highest possible score after making any number of moves (including zero moves). */




#include <bits/stdc++.h>
using namespace std;


void row_flip (vector<vector <int>> &v, int rno){
    for (int j=0; j<v[rno].size(); j++){
        if (v[rno][j]==0){
            v[rno][j] = 1;
        }

        else{
            v[rno][j] = 0;
        }
    }
}


void column_flip (vector<vector <int>> &v, int cno){
    for (int i=0; i<v.size(); i++){
        if (v[i][cno]==0){
            v[i][cno] = 1;
        }

        else{
            v[i][cno] = 0;
        }
    }
}


int main(){

    int a,b;

    cout<<"Enter number of rows of the matrix : ";
    cin>>a;

    cout<<"Enter the number of columns of the matrix : ";
    cin>>b;

    vector<vector <int>> m(a, vector<int> (b));

    cout<<"enter the binary elements of matrix.\n";
    for (int i = 0; i<a; i++){
        for (int j = 0; j<b; j++){
            cin>>m[i][j];
        }
    }


    //  processing.............

    for (int i=0; i<a; i++){        //  row flipping for j = 0.
        if (m[i][0] == 0){
            row_flip (m,i);
        }
    }


    for (int j=1; j<b; j++){      //  column flipping for j>=1.
        int no0 = 0;
        int no1 = 0;

        for (int i=0; i<a; i++){     //  counting number of 0's and 1's in every column.
            if (m[i][j] == 0){
                no0++;
            }
            else{
                no1++;
            }
        }

        if (no0 > no1){
            column_flip (m,j);
        }
    }



    int result = 0;

    for (int i=0; i<a; i++){     //  converting binary matrix to decimal result.

        int decimal = 0;
        int base = 1;
        
        for (int j=b-1; j>=0; j--){
            decimal += (m[i][j] * base);
            base *= 2;
        }

        result += decimal;
    }


    cout<<"The highest possible score is : "<<result<<endl;
    


    return 0;
}