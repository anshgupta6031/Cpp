                                    //  find the word occuring most times in a given string.
                                                        //  Method 2



#include <bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cout<<"enter a string."<<endl;
    getline(cin,str);

    stringstream ss (str);
    string temp;
    vector <string> v;          //  vector of strings.........
                                //  vector me is liye kiya kyonki words ko hame alag to krna h pr spaces se nhi kr skte. so vector was the best option.

    while (ss>>temp){       //  storing words in vector.
        v.push_back(temp);
    }

    sort(v.begin(),v.end());        //  so that same words come together.

    int count = 1, max = 1;

    for (int i=0; i<v.size()-1; i++){
        if (v[i]==v[i+1]){
            count++;
        }
        else{
            count = 1;
        }

        if (count>max){
            max = count;
        }
    }


    cout<<"The word occuring most time is :-"<<endl;
    count = 1;

    for (int i=0; i<v.size()-1; i++){       //  loop for printing.
        if (v[i]==v[i+1]){
            count++;
        }
        else{
            count = 1;
        }

        if (count==max){                                   //   by this method, even if multiple words occur most time, all will be printed.
            cout<<v[i]<<" "<<max<<" times."<<endl;
        }
    }

    if (v.size()==1){                   //  when size is 1, both the above loops do not run.
        cout<<v[0]<<" "<<max<<" times."<<endl;
    }


    return 0;
}