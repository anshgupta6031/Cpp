                        //  Given an integer, generate pascal's triangle in a 2D vector with variable columns.
                                                        //  leetcode 118




#include <bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cout<<"Enter the integer : ";
    cin>>n;


    //  processing.............
    

    vector <vector<int>> pascal;
    
    for (int i = 0; i<n; i++){
        vector <int> temp;
        for (int j = 0; j<=i; j++){
            if (j==0 || j==i){
                temp.push_back(1);
            }
            else{
                temp.push_back(pascal[i-1][j] + pascal[i-1][j-1]);
            }
        }
        pascal.push_back(temp);
    }


    // display...........


    cout<<endl<<"The generated pascal's triangle is :-"<<endl<<endl;

    for (int i = 0; i<n; i++){
        for (int j = 0; j<=i; j++){
            cout<<pascal[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}