                                        //  program to print no. of words in a string.
                            


#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cout<<"enter a string."<<endl;
    getline(cin,s);

    int count = 1;

    if (s[0]==' '){
        count = 0;
    }

    for (int i=0; i<s.length()-1; i++){
        if (s[i]==' ' && s[i+1]!=' '){      //  it will now count only words no matter how many spaces you give.
            count++;
        }
    }

    cout<<"no. of words = "<<count;
    

    return 0;
}