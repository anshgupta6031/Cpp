//  Push an element at any index in a stack........



#include <bits/stdc++.h>
using namespace std;


void display (stack <int> &st){         //  itterative approach......
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


void reverse_display (stack <int> &st){         //  recursive approach......

    if (st.size() == 0) return;

    int x = st.top();
    cout<< x <<" ";
    st.pop();

    reverse_display (st);
    st.push(x);                     //  to maintain the stack.......
}


void display_2 (stack <int> &st){         //  recursive approach......

    if (st.size() == 0) return;

    int x = st.top();
    st.pop();

    display_2 (st);

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

    reverse_display(st);
    cout<<endl<<endl;

    display_2(st);

    return 0;
}