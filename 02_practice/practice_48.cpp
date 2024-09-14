                                    //  find the word occuring most times in a given string.
                                                    //  Method 1.



#include <bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cout<<"enter a string."<<endl;
    getline(cin,str);

    stringstream s1 (str);
    stringstream s2 (str);

    string temp, temp2;

    int max = 0;
    string maxs;

    while (s1>>temp){
        int count = 0;
        while (s2>>temp2){
            if (temp == temp2){
                count++;
            }
        }

        if (count>max){
            max = count;
            maxs = temp;
        }
    }

    cout<<"The word occuring most time is :-"<<endl;
    cout<<maxs<<" "<<max<<" times."<<endl;


    return 0;
}