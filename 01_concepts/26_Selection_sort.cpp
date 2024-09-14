                                                    //  selection sort



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

    
    for (int i=0; i<n-1; i++){
        int min = v[i];
        int index_min = i;
        for (int j=i; j<n; j++){
            if (v[j]<min){
                min = v[j];
                index_min=j;
            }
        }

        int temp = v[i];        //  swapping v[i] and v[index_min].
        v[i]=v[index_min];
        v[index_min]=temp;   
    }

    display(v);

    return 0;
}


//  Time complexity for selection sort is O(n^2) for all cases.
//  And space complexity is O(1).

//  Selection sort is an unstable sort. i.e the numbers change their relative positions while sorting.

/*  USE CASES :-
    1) when less no. of swaps are to be done while sorting.
    2) jab starting se 'k' no. of minimum elements nikaalne ho out of 'n' elements of array.
    3) if size of array is small.
*/