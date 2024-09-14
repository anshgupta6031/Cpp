


#include <bits/stdc++.h>
using namespace std;

void wrong_change (vector <int> a){     //  call by value
    a[0]=500;
    a[1]=300;
}

void right_change (vector <int> &a){        // and this is how we call by reference.
    a[0]=500;
    a[1]=300;
}


int main(){

    vector <int> v;
    
    v.push_back(91);
    v.push_back(56);
    v.push_back(77);
    v.push_back(45);
    v.push_back(36);

    for (int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;

    wrong_change(v);

    for (int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;

    right_change(v);

    for (int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }


    return 0;
}