                                                    //  Insertion sort



#include <bits/stdc++.h>
using namespace std;

void display (vector <int> &v){
    for (int i : v){        //  for each loop for traversing every element of an array.
        cout<< i <<" ";
    }
    cout<<endl;
}

int main(){

    vector <int> v;

    int n;
    cout<<"enter the number of elements of array : ";
    cin>>n;

    cout<<"enter the elements of the array : ";

    for (int i=0; i<n; i++){
        int p;
        cin>>p;
        v.push_back(p);
    }

    display(v);


    //  processing...............

    for (int i=1; i<n; i++){
        for (int j=i; j>0; j--){
            if (v[j]>=v[j-1]){      //  for optimizing...........
                break;
            }

            else{
                swap(v[j],v[j-1]);
            }
        }
    }
    

    display(v);

    return 0;
}


//  Time complexity for insertion sort is O(n^2).
//  And space complexity is O(1).

//  Time complexity for the best case (i.e. for already sorted input) in Insertion sort code is O(n).

//  Insertion sort is a stable sort. i.e the numbers do not change their relative positions while sorting.