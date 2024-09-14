                                        //  merge two sorted array to get a sorted array.
                                                //  By using three pointers.
                                                        //  Method 1.
                                    //  putting the pointers at the begining of the array.



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


    int n = n1+n2;
    vector <int> v(n);

    //  processing...............

    int i = 0, j = 0 ,k = 0;   //  i is for v1 array and j is for v2 array and k is for v array.

    while ((i<n1) && (j<n2)){

        if (v1[i] <= v2[j]){
            v[k] = v1[i];
            i++;
        }

        else if (v2[j] <= v1[i]){
            v[k] = v2[j];
            j++;
        }

        k++;
    }

    //  for remaining i or j values.......

    if (i==n1){         //  v1 ke saare elements utha chuka hu.
        while (j<n2){   //  bache hue v2 ke elements k me bhar do.
            v[k] = v2[j];
            j++;
            k++;
        }
    }

    if (j==n2){     //  v2 ke saare elements utha chuka hu.
        while (i<n1){   //  bache hue v1 ke elements k me bhar do.
            v[k] = v1[i];
            i++;
            k++;
        }
    }

    
    display(v);

    return 0;
}