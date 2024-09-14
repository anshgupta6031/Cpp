



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


void reverse_queue(queue<int> &q){          //  function to reverse a queue.
    stack<int> st;                          //  we have to use a stack......

    while (q.size() > 0){
        st.push(q.front());
        q.pop();
    }

    while (st.size() > 0){
        q.push(st.top());
        st.pop();
    }
}


int main(){

    queue<int> q;

    q.push(10);             //  happens at rear/back....
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    cout<< q.front() <<endl;        //  It is FIFO.
    cout<< q.back() <<endl;
    cout<< q.size() <<endl<<endl;

    q.pop();            //  happens at front........

    cout<< q.front() <<endl;
    cout<< q.back() <<endl;
    cout<< q.size() <<endl<<endl;

    cout<< q.empty() <<endl<<endl;          //  returns true if the queue is empty.

    display(q);
    cout<<endl;

    q.pop();
    display(q);
    cout<<endl;

    q.push(70);
    display(q);
    cout<<endl<<endl;

    reverse_queue(q);

    display(q);
    cout<<endl<<endl;



    return 0;
}