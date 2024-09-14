                        //  Generate all binary strings of length 'n' without consecutive 1's, using recursion.



#include <bits/stdc++.h>
using namespace std;

void binary (string s, int n){
    if (s.size()==n){
        cout<<s<<endl;
        return;
    }

    binary (s + "0", n);
    
    if (s=="" || s[s.size()-1] != '1') binary (s + "1", n);
}

int main(){

    int n;
    cout<<"enter the length of binary string : ";
    cin>>n;

    binary("", n);


    return 0;
}