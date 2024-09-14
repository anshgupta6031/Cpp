                                                    //  Merge sort............



#include <bits/stdc++.h>
using namespace std;


void display(vector <int> &v){
    int n = v.size();
    for (int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


void merge (vector <int>& v1, vector <int>& v2, vector <int>& v){       //  function which makes a sorted array 'v' by merging 2 sorted arrays 'v1' and 'v2'.

    int n1 = v1.size();
    int n2 = v2.size();

    int i = 0, j = 0 ,k = 0;   //  i is for v1 array and j is for v2 array and k is for v array.

    while ((i<n1) && (j<n2)){

        if (v1[i] <= v2[j]) v[k++] = v1[i++];       //  '<=' makes this sorting stable. If it had been '<' then it would not be stable.

        else v[k++] = v2[j++];
    }

    //  for remaining i or j values.......

    if (i==n1){         //  v1 ke saare elements utha chuka hu.
        while (j<n2){   //  bache hue v2 ke elements k me bhar do.
            v[k++] = v2[j++];
        }
    }

    else if (j==n2){     //  v2 ke saare elements utha chuka hu.
        while (i<n1){   //  bache hue v1 ke elements k me bhar do.
            v[k++] = v1[i++];
        }
    }

}


void merge_sort (vector <int>& v){

    int n = v.size();

    if (n==1) return;               //  base case......

    int n1 = n/2, n2 = n - (n/2);

    vector <int> v1 (n1);
    vector <int> v2 (n2);

    //  dividing vector 'v' into two parts 'v1' and 'v2'.

    for (int i=0; i<n1; i++){
        v1[i] = v[i];
    }

    for (int i=0; i<n2; i++){
        v2[i] = v[n1+i];
    }

    //  recursive calls..........
    merge_sort (v1);
    merge_sort (v2);

    //  merging them again as they get sorted.
    merge (v1,v2,v);

    v1.clear();     //  this deletes the vectors after we use them to save memory.
    v2.clear();     //  using this improves the space complexity to O(n).
    
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

    merge_sort (arr);

    display(arr);


    return 0;
}



//  Time complexity for merge sort is O(n.log n) for all cases.
//  And space complexity is O(n.log n) which can be improved to O(n) if we delete the used vectors dynamically.

//  Merge sort is a stable sort. i.e the numbers don't change their relative positions while sorting.

/*  USE CASES :-
    1) used in sorting linked list.
    2) used to count invesions (in count inversion problems).
    3) used in external sorting.
*/