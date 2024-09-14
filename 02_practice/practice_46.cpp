                            //  given a string, print the character occuring most no. of times.
                            


#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cout<<"enter a string."<<endl;
    getline(cin,s);

    sort(s.begin(),s.end());

    int j=0;
    int max=0;
    char ch;

    for (int i=0; i<s.length()-1; i++){
        if (s[i]!=s[i+1]){
            int count = i-j+1;
            j = i+1;

            if (count>max){
                max = count;
                ch = s[i];
            }
        }
    }


    cout<<"The character which occurs most no. of times in the string is :-"<<endl;
    cout<<ch<<" "<<max<<" times."<<endl;
    

    return 0;
}