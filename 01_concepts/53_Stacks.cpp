


#include <bits/stdc++.h>
using namespace std;

int main(){

    stack <int> st;     //  creating a stack........

    st.push(10);        //  pushing an element into the stack.........
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout<< st.top() <<endl<<endl;        //  finding the top of the stack.........  //  It is FILO.

    cout<< st.size() <<endl<<endl;        //  finding the size of the stack.........

    st.pop();                           //  popping an element out of the stack.........
    cout<< st.top() <<endl;
    cout<< st.size() <<endl<<endl;

    cout<< st.empty() <<endl<<endl;         //  returns true if stack is empty......


    while (st.size() > 0){                  //  printing all the elements of the stack in reverse order.
        cout << st.top() <<" ";
        st.pop();
    }                                       //  LOL, the elements are gone!!!
    cout<<endl<<endl;

    cout<< st.size() <<endl<<endl;



    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    stack <int> temp;                       //  creating a temporary stack for saving the elements......

    while (st.size() > 0){                  //  printing all the elements of the stack in reverse order again.....
        cout << st.top() <<" ";
        temp.push(st.top());
        st.pop();
    }                                       //  Still, the elements are gone!!!
    cout<<endl<<endl;

    cout<< st.size() <<endl<<endl;

    while (temp.size() > 0){                  //  retriving the lost elements in the stack........
        st.push(temp.top());
        temp.pop();
    }

    cout<< st.size() <<endl<<endl;

    //  So T.C for displaying the stack = O(n).
    //  and S.C  = O(n).

    return 0;
}



//  elements in a stack can not be modified.
//  For any modification the element has to be removed and a new element has to be inserted at its place.

/*

Why stack?

1) Provides discipline.
2) Provides intuition.
3) Size is unlimited.

*/