//  Reverse the given stack......
//  Using recursion.........



#include <bits/stdc++.h>
using namespace std;


void display (stack <int> &st){

    if (st.size() == 0) return;

    int x = st.top();
    st.pop();

    display (st);

    cout<< x <<" ";
    st.push(x);
}


void push_at_bottom(stack <int> &st, int val){

    if (st.size() == 0){
        st.push(val);
        return;
    }

    int x = st.top();
    st.pop();

    push_at_bottom(st, val);
    st.push(x);
}


void reverse_stack (stack <int> &st){

    if (st.size() == 1) return;

    int x = st.top();
    st.pop();

    reverse_stack(st);
    push_at_bottom(st, x);
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

    reverse_stack(st);

    display(st);
    cout<<endl<<endl;

    return 0;
}