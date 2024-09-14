//  Reverse the same given stack........
//  Itterative approach.........



#include <bits/stdc++.h>
using namespace std;

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

    stack <int> temp1;
    stack <int> temp2;

    while (st.size()){
        temp1.push(st.top());
        st.pop();
    }

    while (temp1.size()){
        temp2.push(temp1.top());
        temp1.pop();
    }

    while (temp2.size()){
        st.push(temp2.top());
        temp2.pop();
    }

    display(st);        //  the stack is reversed......


    return 0;
}

//  T.C = O(n).
//  S.C = O(n).