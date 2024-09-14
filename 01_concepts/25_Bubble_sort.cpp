                                                //  program for bubble sort.



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
    //  Most optimized bubble sort code............

    for (int i=0; i<n-1; i++){
        int flag = 1;

        for (int j=0; j<n-i-1; j++){
            if (v[j]>v[j+1]){
                swap(v[j], v[j+1]);         //  this is a built in function for swaping.
                flag=0;
            }
        }

        if (flag==1){               //  checking if the array is sorted, if sorted then i will break the loop.
            break;
        }
    }

    display(v);

    return 0;
}


//  Time complexity for bubble sort is O(n^2).
//  And space complexity is O(1).

//  Time complexity for the best case (i.e. for already sorted input) in the optimized bubble sort code is O(n).

//  Bubble sort is a stable sort. i.e the numbers do not change their relative positions while sorting.