//  Push an element at any index in a stack........
//  itterative approach........



#include <bits/stdc++.h>
using namespace std;


void push_at_index(stack <int> &st, int val, int idx){

    if (idx >= st.size() || idx < 0) cout<<"INVALID INDEX!!!"<<endl;

    stack <int> temp;

    while (st.size() > idx){
        temp.push(st.top());
        st.pop();
    }

    st.push(val);

    while (temp.size()){
        st.push(temp.top());
        temp.pop();
    }
}


void display (stack <int> &st){
    stack <int> temp;

    while (st.size() > 0){
        temp.push(st.top());
        st.pop();
    }
    
    while (temp.size() > 0){
        cout << temp.top() <<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl<<endl;
}


int main(){

    stack <int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    display(st);

    int val, idx;

    cout<< "enter the index : ";
    cin>>idx;

    cout<< "enter the value : ";
    cin>>val;
    cout<<endl;

    push_at_index(st, val, idx);

    display(st);

    return 0;
}

//  T.C = O(n).
//  S.C = O(n).