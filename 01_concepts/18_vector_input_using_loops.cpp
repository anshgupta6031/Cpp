


#include <bits/stdc++.h>
using namespace std;

int main(){

    vector <int> v;

    int p;
    cout<<"enter the number of elements : ";
    cin>> p;

    cout<<"enter the elements :- ";

    for (int i=0; i<p; i++){
        int n;
        cin>>n;
        v.push_back(n);
    }

    for (int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";     //  we can also access the elements using at() function. i.e. v.at() is same as v[].
    }

    cout<<endl;


//*************************************************************************************************************************************************************


    sort(v.begin(), v.end());   //  this will sort the vector v from begining to end in assending order.
                                //  time complexity of this function is O(n log n).

    for (int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;


//*********************************************************************************************************************************************************************


    reverse(v.begin(), v.end());    //  this will reverse the vector.

    for (int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }


    return 0;
}