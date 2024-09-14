                   //  program to print the power set of a given string with doublicate elements present in the string.



#include <bits/stdc++.h>
using namespace std;

void power_set (string ans, string original, vector <string> &v, bool flag){
    if (original==""){
        v.push_back(ans);
        return;
    }

    char ch = original[0];

    if (original.size()==1){
        if (flag==true) power_set (ans+ch, original.substr(1), v, true);
        power_set (ans, original.substr(1), v, true);
        return;
    }

    char dh = original[1];

    if (ch==dh){
        if (flag==true) power_set (ans+ch, original.substr(1), v, true);
        power_set (ans, original.substr(1), v, false);
    }

    else{
        if (flag==true) power_set (ans+ch, original.substr(1), v, true);
        power_set (ans, original.substr(1), v, true);
    }

}


int main(){

    string original;
    cout<<"Enter a string : ";
    getline(cin, original);

    sort(original.begin(), original.end());

    vector <string> v;

    power_set("", original, v, true);

    for (int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }


    return 0;
}


//  similar done with integer array in Leetcode 90................