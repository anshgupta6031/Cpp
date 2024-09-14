           //  program to move all negative numbers to the begining and positive numbers to end with constant extra spacing.



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
    //  in this question we will use two pointer method.....

    int i = 0, j = n-1;

    while (i<j){
        if ((v[i]>=0) && (v[j]<0)){
            int temp = v[i];
            v[i]=v[j];
            v[j]=temp;

            i++;
            j--;
        }

        if (v[i]<0){
            i++;
        }

        if (v[j]>=0){
            j--;
        }
    }
    
    display(v);

    return 0;
}