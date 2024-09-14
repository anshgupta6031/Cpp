



#include <iostream>
#include <unordered_set>                //  we have to import this library to use sets.
using namespace std;

int main(){

    unordered_set<int> s;

    s.insert(1);            //  insertion in set is done in random order.
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    cout<< s.size() <<endl;             //  function to find the size of set.

    s.insert(5);        //  set only stores unique elements. As we already have '5' in the set, this '5' will not be inserted.
    cout<< s.size() <<endl;           //  size does not change as '5' was not inserted.

    for(int ele: s){             //  as there is no order of elements in sets, we use for-each loop to access the elements of the set.
        cout<< ele <<" ";
    }
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
//  T.C for insertion, deletion, searching is O(1).

