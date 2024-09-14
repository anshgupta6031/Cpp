                                            //  find the last occurence of 'x' in a vector.


#include <bits/stdc++.h>
using namespace std;

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

    int x;
    cout <<"enter the number whose last occurance you want to find out : ";
    cin>>x;

    // processing.......

    bool b = 0;

    for (int i=(n-1); i>=0; i--){       //  traversing from the end of the vector.
        if (v[i]==x){
            cout<<"The last occurance of "<<x<<" is at the index "<<i<<endl;
            b = 1;
            break;
        }
    }

    if (b==0){
        cout<<"The element is not present in the vector.";
    }


    return 0;
}