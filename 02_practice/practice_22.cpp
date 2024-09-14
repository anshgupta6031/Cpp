                                            //  sort array of 0s, 1s, and 2s.
                                                      //  Method 1.
                                                //  By two pass method.



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

    //  processing...............

    int n0=0,n1=0,n2=0;

    for (int i=0; i<n; i++){
        if (v[i]==0){
            n0++;
        }

        if (v[i]==1){
            n1++;
        }

        if (v[i]==2){
            n2++;
        }
    }

    for (int j=0; j<n; j++){
        if (j<n0){
            v[j]=0;
        }

        else if (j<(n0+n1)){
            v[j]=1;
        }

        else{
            v[j]=2;
        }
    }

    
    display(v);

    return 0;
}