//  Reverse first k elements in a queue.



#include <bits/stdc++.h>
using namespace std;


void display(queue<int> &q){                //  T.C = O(n).     //  S.C = O(1).

    for(int i=1; i<=q.size(); i++){
        int x = q.front();

        cout<< x <<" ";
        q.pop();

        q.push(x);
    }
}


void reverse_first_k(queue<int> &q, int k){
    stack<int> st;
    int n = q.size();

    for(int i=1; i<=k; i++){
        st.push(q.front());
        q.pop();
    }

    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }

    for(int j=1; j<=n-k; j++){
        int x = q.front();
        q.pop();
        q.push(x);
    }
}


int main(){

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    display(q);
    cout<<endl;

    int k;
    cout<<"Enter k : ";
    cin>>k;

    reverse_first_k(q, k);

    display(q);
    cout<<endl;


    return 0;
}