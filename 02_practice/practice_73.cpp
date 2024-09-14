                                    //  Find the kth smallest element in an array.  (quick select)



//  same quick sort code is used with some modifications.........

#include <bits/stdc++.h>
using namespace std;


void display(vector <int> &v){
    int n = v.size();
    for (int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int partition (vector <int> &v, int start, int end){


    int pivot_element = v[start];
    int count = 0;

    for (int i=start+1; i<=end; i++){
        if (v[i] <= pivot_element) count++;
    }

    int pivot_idx = count + start;

    swap (v[start], v[pivot_idx]);

    int i = start, j = end;

    while (i<pivot_idx && j>pivot_idx){
        if (v[i]<=pivot_element) i++;
        else if (v[j]>pivot_element) j--;
        else if (v[i]>pivot_element && v[j]<=pivot_element){
            swap (v[i],v[j]);
            i++;
            j--;
        }
    }

    return pivot_idx;

}


int quick_sort (vector <int> &v, int start, int end, int k){

    int pivot_idx = partition (v, start, end);

    if (pivot_idx+1 == k) return v[pivot_idx];     //  base case.............

    else if (pivot_idx+1 > k) return quick_sort (v, start, pivot_idx-1, k);
    else return quick_sort (v, pivot_idx+1, end, k);
    
}


int main(){

    vector <int> arr;
    int n, k;

    cout<<"enter the number of elements in the vector : ";
    cin>>n;

    cout<<"enter the elements of the vector :- ";
    for(int i=0; i<n; i++){
        int p;
        cin>>p;
        arr.push_back(p);
    }

    cout<<"Enter the value of k : ";
    cin>>k;

    display(arr);

    cout<<"The "<< k <<"th smallest element in the array is : "<< quick_sort (arr, 0, n-1, k);

    return 0;

}



//  Time complexity for this problem is O(n) in average cases.