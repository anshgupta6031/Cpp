            //  Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.
                                                        //  leetcode 59
                                                    //  (spiral matrix 2)




#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"enter the order of square matrix you want to print : ";
    cin>>n;

    //  processing.............

    int a = n;
    int b = n;

    vector <vector<int>> matrix(a, vector <int> (b));

    int au = 0;
    int bl = 0;
    int ad = a-1;
    int br = b-1;
    int p=0;
    int count=1;


    while(ad>=au && br>=bl){
        
        for (int j = bl; j<=br && p<a*b; j++){
        matrix[au][j] = count;
        count++;
        p++;
        }
        au++;
    

        for (int i = au; i<=ad && p<a*b; i++){
        matrix[i][br] = count;
        count++;
        p++;
        }
        br--;
    

        for (int j = br; j>=bl && p<a*b; j--){
        matrix[ad][j] = count;
        count++;
        p++;
        }
        ad--;
    

        for (int i = ad; i>=au && p<a*b; i--){
        matrix[i][bl] = count;
        count++;
        p++;
        }
        bl++; 
    }


    // display...........


    cout<<endl<<"The generated spiral matrix is :-"<<endl<<endl;

    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}