


#include <bits/stdc++.h>
using namespace std;

int main(){

    vector <int> v;

    v.push_back(9);
    v.push_back(6);
    v.push_back(4);
    v.push_back(8);
    v.push_back(0);
    v.push_back(14);
    v.push_back(9);
    v.push_back(6);
    v.push_back(4);
    v.push_back(8);
    v.push_back(0);
    v.push_back(14);

    for (int i=0; i<(v.size()); i++){
        cout << v[i]<<" ";
    }
    cout<<endl;

    cout<<v.size()<<" "<<v.capacity()<<endl;

    v.pop_back();   //  it removes an element from the back of the vector.
    v.pop_back();   //  size gets changed after pop back but the capacity is not changed.

    cout<<v.size()<<" "<<v.capacity()<<endl;

    for (int i=0; i<(v.size()); i++){
        cout << v[i]<<" ";
    }
    cout<<endl;

    v.erase(v.begin());             //  function to remove the first element of an array / vector.

    for (int i=0; i<(v.size()); i++){
        cout << v[i]<<" ";
    }


    return 0;
}