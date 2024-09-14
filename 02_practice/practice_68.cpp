                                        //  program to print all the sub arrays of an array.



#include <bits/stdc++.h>
using namespace std;


void subarray (vector <int> &original, vector <int> v, vector <vector <int>> &ans, int idx){

    if (idx==original.size()){
        ans.push_back(v);
        return;
    }

    subarray (original, v, ans, idx+1);

    if (v.size()==0 || (v[v.size()-1] == original[idx-1])){
        v.push_back(original[idx]);
        subarray (original, v, ans, idx+1);
    }
    
}


int main(){

    int n;

    cout<<"Enter the size of the array : ";
    cin>>n;

    vector <int> original(n);
    vector <int> v;
    vector <vector <int>> ans;

    cout<< "Enter the elements of the array :-"<<endl;

    for (int i=0; i<n; i++){
        cin>>original[i];
    }

    subarray (original, v, ans, 0);

    cout<<"The sub arrays are :-"<<endl<<endl;

    cout<<"[]"<<endl;           //  for original.size()==0.
    for (int i=1; i<ans.size(); i++){
        cout<<"[";
        for (int j=0; j<ans[i].size(); j++){
            cout<< ans[i][j]<<", ";
        }
        cout<<"\b\b]"<<endl;        //  '/b' is the escape sequence for backspace.
    }


    return 0;
}