//  program to count the number of times the neighbouring characters of a string are different from each other.


#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cout<<"enter a string.\n";
    getline(cin,s);

    int count = 0;
    int n = s.length();


    for (int i=0; i<n; i++){
        if (n==1){
            break;
        }

        else if (n==2 && s[0]!=s[1]){
            count++;
            break;
        }

        else if (i==0 && s[i]!=s[i+1]){        //  for first element.
            count++;
        }

        else if (i==n-1 && s[i]!=s[i-1]){      //  for last element.
            count++;
        }

        else if (s[i-1]!=s[i] && s[i]!=s[i+1]){
            count++;
        }
    }


    cout<<"The number of times the neighbouring characters of the string are different from each other is "<<count;

    return 0;
}