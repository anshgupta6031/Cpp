            //  given two strings, tell if they are anagram. i.e (if one can be arranged such a way that it forms the other).
                                                        //  leetcode 242.



#include <bits/stdc++.h>
using namespace std;

int main(){

    string s1, s2;
    cout<<"enter first string."<<endl;
    getline(cin,s1);
    cout<<"enter second string."<<endl;
    getline(cin,s2);

    bool flag = 1;

    //  processing...................

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    if (s1.length() == s2.length()){
        for (int i=0; i<s1.length(); i++){
            if (s1[i]!=s2[i]){
                flag = 0;
                break;
            }
        }
    }

    else{
        flag = 0;
    }

    if(flag==0){
        cout<<"the strings are not anagram.";
    }

    else{
        cout<<"the strings are anagram.";
    }


    return 0;
}