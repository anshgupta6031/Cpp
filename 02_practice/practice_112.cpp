//  Find the Kth smallest element in a given array using heap.
//  Same thing done in (practice_73.cpp) using quick select. Which is an even better approach as T.C is lesser.



#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {10,20,-4,6,18,2,105,118};
    int k = 3;

    //  we will use max heap for lesser T.C.
    priority_queue <int> pq;

    for(int i=0; i<arr.size(); i++){
        pq.push(arr[i]);

        if(pq.size() > k) pq.pop();
    }

    cout<< pq.top() <<endl;


    return 0;
}

//  T.C = O(n log k).
//  S.C = O(k).         (for k sized max heap)

//  If we would have used min heap then the T.C would have been O(n log n).