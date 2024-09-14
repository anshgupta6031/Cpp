                        //  program to print the sub sequences of an array taken 'k' elements at a time.



#include <bits/stdc++.h>
using namespace std;


void subsequence (vector <int> &original, vector <int> v, vector <vector <int>> &ans, int k, int idx){

    if (idx==original.size()){
        if (v.size()==k) ans.push_back(v);
        return;
    }


    subsequence (original, v, ans, k, idx+1);
    v.push_back(original[idx]);
    subsequence (original, v, ans, k, idx+1);
}


int main(){

    int n,k;

    cout<<"Enter the size of the array : ";
    cin>>n;

    vector <int> original(n);
    vector <int> v;
    vector <vector <int>> ans;

    cout<< "Enter the elements of the array :-"<<endl;

    for (int i=0; i<n; i++){
        cin>>original[i];
    }

    cout<<endl<<"Enter the size of sub sequence you want : ";
    cin>>k;


    subsequence (original, v, ans, k, 0);

    cout<<"The sub sequences are :-"<<endl<<endl;

    for (int i=0; i<ans.size(); i++){
        cout<<"[";
        for (int j=0; j<k; j++){
            cout<< ans[i][j]<<", ";
        }
        cout<<"\b\b]"<<endl;        //  '/b' is the escape sequence for backspace.
    }


    return 0;
}