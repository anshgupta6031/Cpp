                                                //  Lazy Propagation - Segment Tree.......
//  Implement a getSum function which gives sum of numbers of an array in a given range,
//  and a UpdateRange function which increments the array by a given value in a given range, for q getSum and UpdateRange queries.....



#include <bits/stdc++.h>
using namespace std;

vector<int> st;                 //  segment tree.....
vector<int> lazy;               //  lazy segment tree.....

//  building the segment tree......
void buildTree(int arr[], int idx, int lo, int hi){           //  lo to hi is the whole range of the given array arr.
    if(lo == hi){
        st[idx] = arr[lo];
        return;
    }

    int mid = lo + (hi-lo)/2;

    buildTree(arr, 2*idx + 1, lo, mid);               //  left subtree
    buildTree(arr, 2*idx + 2, mid + 1, hi);           //  right subtree

    st[idx] = st[2*idx+1] + st[2*idx+2];
}


int getSum(int idx, int lo, int hi, int& l, int& r){

    //  Check for pending lazy updates........
    if(lazy[idx] != 0){
        int range_size = hi - lo + 1;
        st[idx] += (lazy[idx] * range_size);

        if(lo != hi){                       //  add lazy to left and right child if they exist.....
            lazy[2*idx+1] += lazy[idx];
            lazy[2*idx+2] += lazy[idx];
        }

        lazy[idx] = 0;
    }

    //  Traverse tree to find Sum.....
    if((r < lo) || (l > hi)) return 0;            //  [l,r] is present outside [lo,hi].

    if((l <= lo) && (hi <= r)) return st[idx];                   //  [lo,hi] is present inside [l,r].

    int mid = lo + (hi-lo)/2;

    return getSum(2*idx+1, lo, mid, l, r) + getSum(2*idx+2, mid+1, hi, l, r);
}


void UpdateRange(int idx, int lo, int hi, int& l, int& r, int val){

    //  Check for pending lazy updates........
    if(lazy[idx] != 0){
        int range_size = hi - lo + 1;
        st[idx] += (lazy[idx] * range_size);

        if(lo != hi){                       //  add lazy to left and right child if they exist.....
            lazy[2*idx+1] += lazy[idx];
            lazy[2*idx+2] += lazy[idx];
        }

        lazy[idx] = 0;
    }

    //  Update tree.....
    if((r < lo) || (l > hi)) return;            //  [l,r] is present outside [lo,hi].

    if((l <= lo) && (hi <= r)){                   //  [lo,hi] is present inside [l,r].          //  Update entire [lo,hi]
        int range_size = hi - lo + 1;
        st[idx] += (val * range_size);

        if(lo != hi){                       //  add lazy to left and right child if they exist.....
            lazy[2*idx+1] += val;
            lazy[2*idx+2] += val;
        }

        return;
    }

    int mid = lo + (hi-lo)/2;
    UpdateRange(2*idx+1, lo, mid, l, r, val);
    UpdateRange(2*idx+2, mid+1, hi, l, r, val);

    st[idx] = st[2*idx+1] + st[2*idx+2];
}


int main(){

    int arr[] = {1,4,2,8,6,4,9,3};      //  0 to 7 index....
    int n = sizeof(arr)/sizeof(arr[0]);

    st.resize(4*n);                     //  the max no. of nodes of a segment tree is 4n.
    lazy.resize(4*n, 0);

    buildTree(arr, 0, 0, n-1); 

    int q;
    cout << "Enter the number of queries : ";
    cin >> q;

    while(q--){
        int flag;
        cout<<"Enter 0 for range Update or 1 for range Sum : ";
        cin>>flag;

        int l, r;
        cout<<"Enter Range : ";
        cin >> l >> r;

        if(flag == 1) cout << "Sum of numbers in this range is : " << getSum(0, 0, n-1, l, r) << endl;

        else if(flag == 0){
            int val;
            cout << "Enter increment value : ";
            cin >> val;

            UpdateRange(0, 0, n-1, l, r, val);

            cout << "Range Updated" << endl;
        }

        else cout<< "Try again" <<endl;
    }

    return 0;
}



//  T.C = O(q log n) after the segment tree is built.
//  T.C for building segment tree = O(n);
