                                //  program to print the power set of a given string (having no doublicate elements).



#include <bits/stdc++.h>
using namespace std;

void power_set (string original, string s){
    if (original==""){
        cout<<s<<endl;
        return;
    }

    power_set (original.substr(1), s);
    power_set (original.substr(1), s + original[0]);
}

int main(){

    string original;
    cout<<"Enter a string : ";
    getline(cin, original);

    power_set(original, "");


    return 0;
}


//  similar done with integer array in Leetcode 78................