                                        //  check palindrome string using recursion.



#include <bits/stdc++.h>
using namespace std;

void palindrome (string &s){
    if (s==""){
        cout<<"The entered string is a palindrome.";
        return;
    }

    if (s[0]!=s[s.size()-1]){
        cout<<"The entered string is not a palindrome.";
        return;
    }

    else{
        s = s.substr(1, s.size()-2);
        palindrome (s);
    }
}

int main(){

    string s;
    cout<<"enter string : ";
    getline(cin,s);

    palindrome (s);


    return 0;
}