                    //  push zeroes to the end while maintaining the relative order of other elements.



//  as here the relative positions of elements are same after the sorting.
//  we will use bubble sorting technique to solve the problem as it is a stable sort.



#include <bits/stdc++.h>
using namespace std;


void display(vector <int> &v){
    int n = v.size();
    for (int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main(){

    vector <int> v;
    int n;

    cout<<"enter the number of elements : ";
    cin>>n;

    cout<<"enter the elements of the vector :- ";
    for(int i=0; i<n; i++){
        int p;
        cin>>p;
        v.push_back(p);
    }

    display(v);

    //  processing..............

    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (v[j]==0){
                swap(v[j],v[j+1]);
            }
        }
    }

    display(v);

    return 0;
}