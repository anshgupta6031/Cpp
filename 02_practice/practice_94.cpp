//  Program to print the next and previous greater element of all the elements in an array.



#include <bits/stdc++.h>
using namespace std;


vector<int> nge(vector <int> &v){       //  just do, pop, ans, push.
    int n = v.size();
    vector <int> next_greater_element(n,-1);

    stack <int> st;

    st.push(v[n-1]);

    for(int i=n-2; i>=0; i--){

        while ((st.size() > 0) && (st.top() <= v[i])) st.pop();

        if(st.size() > 0) next_greater_element[i] = st.top();

        st.push(v[i]);
    }

    return next_greater_element;
}


vector<int> pge(vector <int> &v){       //  just do, pop, ans, push.
    int n = v.size();
    vector <int> prev_greater_element(n,-1);

    stack <int> st;

    st.push(v[0]);

    for(int i=1; i<n; i++){

        while ((st.size() > 0) && (st.top() <= v[i])) st.pop();

        if(st.size() > 0) prev_greater_element[i] = st.top();

        st.push(v[i]);
    }

    return prev_greater_element;
}


int main(){

    vector <int> v;

    int n;
    cout<<"enter the size of array : ";
    cin>>n;

    cout<<"Enter the elements :-"<<endl;
    for(int i=0; i<n; i++){
        int p;
        cin>>p;
        v.push_back(p);
    }

    vector <int> next_greater_element = nge(v);

    for(int i=0; i<n; i++){
        cout<< next_greater_element[i] <<" ";
    }
    cout<<endl<<endl;

//***************************************************************************************************************

    vector <int> prev_greater_element = pge(v);

    for(int i=0; i<n; i++){
        cout<< prev_greater_element[i] <<" ";
    }
    cout<<endl;


    return 0;
}

//  T.C = O(n).
//  S.C = O(n).