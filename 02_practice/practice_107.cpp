//  Reorder Queue (Interleave 1st half with 2nd half).  //  given the length of queue is even.  
//  do it with the use of only one extra stack.

//  Ex: 1 2 3 4 5 6 7 8
//  gives: 1 5 2 6 3 7 4 8 



#include <bits/stdc++.h>
using namespace std;


void display(queue<int> &q){

    for(int i=1; i<=q.size(); i++){
        int x = q.front();

        cout<< x <<" ";
        q.pop();

        q.push(x);
    }
}


void reorder(queue<int> &q){
    stack<int> st;
    int n = q.size();

    for(int i=1; i<=n/2; i++){      //  pushing first half in the stack.
        st.push(q.front());
        q.pop();
    }

    for(int i=1; i<=n/2; i++){      //  putting back first half in the queue.
        q.push(st.top());
        st.pop();
    }                               //  at this point, first half has become the second half of the queue and is reversed as well.

    for(int i=1; i<=n/2; i++){      //  now, pushing new first half in the stack.
        st.push(q.front());
        q.pop();
    }

    for(int i=1; i<=n/2; i++){      //  pushing the stack element and rotating the queue alternately.
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }

    for(int i=1; i<=n; i++){      //  finally reversing the queue to get the result.
        st.push(q.front());
        q.pop();
    }
    
    for(int i=1; i<=n; i++){
        q.push(st.top());
        st.pop();
    }
    
}


int main(){

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    display(q);
    cout<<endl;

    reorder(q);

    display(q);
    cout<<endl;


    return 0;
}