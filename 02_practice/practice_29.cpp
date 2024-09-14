                                        //  previous greatest element array.
                                        //  and nest greatest element array.
                                        //  with less time complaxity.



#include <bits/stdc++.h>
using namespace std;

void display(vector <int> &v){
    int n = v.size();
    for (int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


vector<int> previous_greatest (vector <int> &v){
    int n = v.size();

    vector <int> pg(n);

    int max = v[0];
    pg[0] = -1;

    for (int i=1; i<n; i++){
        pg[i] = max;

        if (v[i]>max){
            max = v[i];
        }
    }

    return pg;
}


vector<int> next_greatest (vector <int> &v){
    int n = v.size();

    vector <int> ng(n);

    int max = v[n-1];
    ng[n-1] = -1;

    for (int i=n-2; i>=0; i--){
        ng[i]=max;

        if (v[i]>max){
            max = v[i];
        }
    }

    return ng;
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

    vector <int> pg = previous_greatest(v);
    display(pg);

    vector <int> ng = next_greatest(v);
    display(ng);


    return 0;
}