                                                    //  Cycle sort............

//   NOTE :- This sort is only applicable when the elements in the array of size n do not repeat and range from 1 to n-1.



#include <bits/stdc++.h>
using namespace std;


void display(vector <int> &v){
    int n = v.size();
    for (int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


void cycle_sort (vector <int> &v){

    int i = 0;

    while (i<v.size()){
        int correct_index = v[i]-1;

        if (i != correct_index) swap (v[i], v[correct_index]);
        else i++;
    }

}


int main(){

    vector <int> arr;
    int n;

    cout<<"enter the number of elements in the vector : ";
    cin>>n;

    cout<<"enter the elements of the vector :- ";
    for(int i=0; i<n; i++){
        int p;
        cin>>p;
        arr.push_back(p);
    }

    display(arr);

    cycle_sort (arr);

    display(arr);


    return 0;
}



//  Time complexity for cycle sort is O(n) for all cases.
//  And space complexity is O(1).

//  Cycle sort is an unstable sort. i.e the numbers change their relative positions while sorting.

/*  USE CASES :-
    1) In solving problems where the given array ranges from (1 to n) or (0 to n) or wherever we have to work between 1 to n.
*/