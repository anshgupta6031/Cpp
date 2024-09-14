//   Two elements of an array a, a[i] and a[j] form an inversion if, a[i] > a[j] and i < j. 
                        //   Given an array of integers, find the inversion count in the array.




#include <bits/stdc++.h>
using namespace std;


int inversion (vector <int> &v1, vector <int> &v2){
    int count = 0;
    int i = 0;          //  for v1.
    int j = 0;          //  for v2.

    while (i<v1.size() && j<v2.size()){
        if (v1[i]>v2[j]){
            count += (v1.size() - i);
            j++;
        }

        else i++;
    }

    return count;
}


//  same merge sort code is used with some modifications.........

void merge (vector <int>& v1, vector <int>& v2, vector <int>& v){

    int n1 = v1.size();
    int n2 = v2.size();

    int i = 0, j = 0 ,k = 0;   //  i is for v1 array and j is for v2 array and k is for v array.

    while ((i<n1) && (j<n2)){
        if (v1[i] <= v2[j]) v[k++] = v1[i++];
        else v[k++] = v2[j++];
    }

    //  for remaining i or j values.......

    if (i==n1) while (j<n2) v[k++] = v2[j++];
    else if (j==n2) while (i<n1) v[k++] = v1[i++];

}


int merge_sort (vector <int>& v){

    int count = 0;

    int n = v.size();

    if (n==1) return 0;               //  base case......

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
    count += merge_sort (v1);
    count += merge_sort (v2);

    //  counting inversions..............
    count += inversion (v1,v2);

    //  merging them again as they get sorted.
    merge (v1,v2,v);

    v1.clear();     //  this deletes the vectors after we use them to save memory.
    v2.clear();     //  using this improves the space complexity to O(n).

    return count;
    
}


int main(){

    vector <int> a;

    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"Enter the elements of the array :-"<<endl;
    for (int i=0; i<n; i++){
        int p;
        cin>>p;
        a.push_back(p);
    }

    cout << "The no. of inversions in the given array is : " << merge_sort (a) <<endl;


    return 0;
}


//  Time complexity is O(n log n).
//  Space complexity is O(n).