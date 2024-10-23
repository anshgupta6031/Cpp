                        //  Find the maximum element in the given range. (Multiple queries). (Using Segment Tree).



#include <bits/stdc++.h>
using namespace std;

vector<int> st;                 //  segment tree.....

//  building the segment tree......
void buildTree(int arr[], int idx, int lo, int hi){           //  lo to hi is the whole range of the given array arr.

    if(lo == hi){
        st[idx] = arr[lo];
        return;
    }

    int mid = lo + (hi-lo)/2;

    buildTree(arr, 2*idx + 1, lo, mid);               //  left subtree
    buildTree(arr, 2*idx + 2, mid + 1, hi);           //  right subtree

    st[idx] = max(st[2*idx+1], st[2*idx+2]);
}


int getMax(int idx, int lo, int hi, int& l, int& r){

    if((r < lo) || (l > hi)) return INT_MIN;            //  [l,r] is present outside [lo,hi].

    if((l <= lo) && (hi <= r)) return st[idx];                   //  [lo,hi] is present inside [l,r].

    int mid = lo + (hi-lo)/2;

    return max(getMax(2*idx+1, lo, mid, l, r), getMax(2*idx+2, mid+1, hi, l, r));
}


int main(){

    int arr[] = {1,4,2,8,6,4,9,3};      //  0 to 7 index....
    int n = sizeof(arr)/sizeof(arr[0]);

    st.resize(4*n);                     //  the max no. of nodes of a segment tree is 4n.

    buildTree(arr, 0, 0, n-1);

    int q;
    cout << "Enter the number of queries : ";
    cin >> q;

    while(q--){
        int l, r;
        cout<<"Enter Range : ";
        cin >> l >> r;

        cout << "Maximum number in this range is : " << getMax(0, 0, n-1, l, r) << endl;
    }

    return 0;
}



//  T.C = O(q log n) after the segment tree is built.
//  T.C for building segment tree = O(n);
