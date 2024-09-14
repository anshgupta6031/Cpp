//  Sort a 'k' sorted array (sort a nearly sorted array).
//  here, 'k' sorted means that the elements of the array are at most k index away from their sorted index.



#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {6,5,3,2,8,10,9};
    int k = 3;

    priority_queue <int,vector<int>,greater<int>> pq;       //  using min heap...

    vector<int> ans;

    for(int i=0; i<arr.size(); i++){
        pq.push(arr[i]);

        if(pq.size() > k){
            ans.push_back(pq.top());
            pq.pop();
        }
    }

    while (pq.size() > 0){
        ans.push_back(pq.top());
        pq.pop();
    }


    //  displaying the answer.....

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i] << " ";
    }
    cout<<endl;


    return 0;
}
