//  Find the first negative in a sliding window of size k.



#include <bits/stdc++.h>
using namespace std;

void display(vector <int> &v){
    int n = v.size();
    for (int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


vector <int> solution(vector <int> &v, int k){
    vector <int> ans;
    int n = v.size();

    queue<int> q;

    for(int i=0; i<n; i++){                 //  pushing the indices of all the negative numbers.
        if(v[i] < 0) q.push(i);
    }

    for (int i=0; i<(n-k+1); i++){

        while(q.size() > 0 && q.front() < i) q.pop();

        if((q.size() == 0) || (q.front() >= i+k)) ans.push_back(0);

        else ans.push_back(v[q.front()]);
    }

    return ans;
}


int main(){

    vector <int> v;
    int n;

    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"Enter the elements of the vector : ";
    for (int i=0; i<n; i++){
        int p;
        cin>>p;
        v.push_back(p);
    }

    int k;
    cout<<"Enter the size of window : ";
    cin>>k;

    display(v);

    vector <int> ans = solution(v,k);

    display(ans);


    return 0;
}