                       //  program to print all the possible arrangements of a string (having all unique elements).



#include <bits/stdc++.h>
using namespace std;


void permutation (string original, string v, vector <string>& ans){

    if (original==""){
        ans.push_back(v);
        return;
    }

    for (int i=0; i<original.size(); i++){
        char ch = original[i];
        string left = original.substr(0,i);
        string right = original.substr(i+1);
        permutation (left+right, v+ch, ans);
    }
    
}


int main(){

    string original;
    vector <string> ans;

    cout<< "Enter the string :-"<<endl;
    getline(cin, original);

    permutation (original, "", ans);

    cout<<"The permutations are :-"<<endl<<endl;

    for (int i=0; i<ans.size(); i++){
        cout<<"\""<< ans[i]<<"\""<<endl;        //  \" is the escape sequence for ".
    }

    return 0;
}