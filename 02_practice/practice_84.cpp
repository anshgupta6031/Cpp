        //  Given an integer array, Find the length of longest subarray which has maximum possible bitwise AND value.

/*
    NOTE :-
        (x & y) < max(x,y)  , always.
        (x & y) = max(x,y)  , iff (x=y)
*/



#include <bits/stdc++.h>
using namespace std;

int main(){

    vector <int> v;
    int n;

    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"Enter the elements of the vector : ";
    for (int i=0; i<n; i++){
        int p;
        cin>>p;
        v.push_back(p);
    }


    //  processing.........


    int maximum = INT_MIN;
    for (int i=0; i<n; i++){
        if (v[i] > maximum) maximum = v[i];
    }


    int i = 0, j = 0, max_len = 0;
    int len;

    while (j<n){                //  sliding window.......

        if ((v[i]!=maximum) && (v[j]!=maximum)){
            i++;
            j++;
        }

        else if ((v[i]==maximum) && (v[j]==maximum)){
            j++;
            len = j-i;
            max_len = max(len,max_len);
        }

        else if ((v[i]==maximum) && (v[j]!=maximum)) i = j;

    }


    cout<<"The length of longest subarray having maximum possible bitwise AND value is : "<< max_len <<endl;


    return 0;
}