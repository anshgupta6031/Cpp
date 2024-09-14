                                        //  merge two sorted array to get a sorted array.
                                                //  By using three pointers.
                                                        //  Method 2.
                                        //  putting the pointers at the end of the array.



#include <bits/stdc++.h>
using namespace std;

void display(vector <int> &v){
    int n = v.size();
    for (int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

vector<int> merge (vector <int> v1, vector <int> v2){   //  here merge is a vector datatype function.

    int n1 = v1.size();
    int n2 = v2.size();

    vector <int> v(n1+n2);

    int i = n1-1;
    int j = n2-1;
    int k = n1+n2-1;   //  i is for v1 array and j is for v2 array and k is for v array.

    while ((i>=0) && (j>=0)){
        if (v1[i]>v2[j]){
            v[k]=v1[i];
            i--;
        }

        else {          //  v2[j]>v1[i]
            v[k]=v2[j];
            j--;
        }

        k--;
    }

    if (i<0){
        while (j>=0){
            v[k]=v2[j];
            j--;
            k--;
        }
    }

    else if (j<0){
        while (i>=0){
            v[k]=v1[i];
            i--;
            k--;
        }
    }

    return v;       //  returning the merged vector.
}


int main(){

    vector <int> v1;
    int n1;

    cout<<"enter the number of elements in first vector : ";
    cin>>n1;

    cout<<"enter the elements of the first vector :- ";
    for(int i=0; i<n1; i++){
        int p;
        cin>>p;
        v1.push_back(p);
    }


    vector <int> v2;
    int n2;
    cout<<"enter the number of elements in second vector : ";
    cin>>n2;

    cout<<"enter the elements of the second vector :- ";
    for(int i=0; i<n2; i++){
        int q;
        cin>>q;
        v2.push_back(q);
    }


    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    display(v1);
    display(v2);

    vector<int> v = merge(v1,v2);   //  reciving the returned value in a vector.
    
    display(v);

    return 0;
}