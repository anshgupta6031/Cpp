//  Push an element at any index in a stack........
//  recursive approach........



#include <bits/stdc++.h>
using namespace std;


void push_at_index(stack <int> &st, int val, int idx){

    if (st.size() <= idx){
        st.push(val);
        return;
    }

    int x = st.top();
    st.pop();

    push_at_index(st, val, idx);
    st.push(x);
}


void display (stack <int> &st){         //  recursive approach......

    if (st.size() == 0) return;

    int x = st.top();
    st.pop();

    display (st);

    cout<< x <<" ";
    st.push(x);
}


int main(){

    stack <int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    display(st);
    cout<<endl<<endl;

    int val, idx;

    cout<< "enter the index : ";
    cin>>idx;

    cout<< "enter the value : ";
    cin>>val;
    cout<<endl;

    if (idx >= st.size() || idx < 0) cout<<"INVALID INDEX!!!"<<endl;
    else push_at_index(st, val, idx);

    display(st);
    cout<<endl<<endl;

    return 0;
}

//  T.C = O(n).
//  S.C = O(n).