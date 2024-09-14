



#include <iostream>
#include <set>                //  we have to import this library to use ordered sets.
using namespace std;

int main(){

    set<int> s;             //  this is how we define an ordered set.

    s.insert(1);            //  in ordered set, the elements are inserted in increasing order.
    s.insert(4);
    s.insert(2);
    s.insert(5);
    s.insert(3);

    cout<< s.size() <<endl;             //  function to find the size of set.

    s.insert(5);        //  set only stores unique elements. As we already have '5' in the set, this '5' will not be inserted.
    cout<< s.size() <<endl;           //  size does not change as '5' was not inserted.

    for(int ele: s){             //  we use for-each loop to access the elements of the set.
        cout<< ele <<" ";
    }                            //  elements are always accessed in sorted order.
    cout<<endl<<endl;



    s.erase(3);                         //  function to remove any element from the set.
    cout<< s.size() <<endl;           //  size changed as '3' is erased.

    for(int ele: s){
        cout<< ele <<" ";
    }
    cout<<endl<<endl;


    int target = 2;

    if(s.find(target) != s.end()){     //    target exists...       //  s.find() searches in set and if not found, returns s.end() which is an iterator next to the last value in the set.
        cout<< target <<" exists in the set."<<endl<<endl;
    }
    else cout<< target <<" does not exist in the set."<<endl<<endl;


    return 0;
}

//  A set is a non linear data structure.
//  T.C for insertion, deletion, searching is O(log n).
