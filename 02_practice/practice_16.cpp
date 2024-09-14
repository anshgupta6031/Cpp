                                //  rotate the given array 'v' by 'k' steps, where 'k' is non negative.
                                                        //  Method 1.



#include <bits/stdc++.h>
using namespace std;

void roll(vector <int> &v){
    int n = v.size();
    int temp = v[n-1];
    for (int i=0; i<n; i++){
        v[n-1-i] = v[n-2-i];
    }
    v[0] = temp;
}

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

    int k;
    cout<<"enter the number of times you want to roll the array :- ";
    cin>>k;

    for (int i=0; i<k; i++){
        roll(v);
    }

    cout<<"after rolling "<<k<<" times the array becomes :-"<<endl;

    display(v);


    return 0;
}