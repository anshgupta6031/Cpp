


#include <iostream>
#include <vector>       //  for using vectors we need to include this library.
using namespace std;

int main(){

    vector <int> v;

    //  for inserting. DO NOT USE [].

    v.push_back(5);
    cout<< v.size() <<endl;     //  every time an element is pushed from back, the size of vector increases by 1.
    cout<< v.capacity() <<endl<<endl;       //  every time the capacity of vector is full and then an element is pushed from back, its capacity is doubled.
                                            //  capacity and size are 2 different things.

    v.push_back(2);
    cout<< v.size() <<endl;
    cout<< v.capacity() <<endl<<endl;

    v.push_back(4);
    cout<< v.size() <<endl;
    cout<< v.capacity() <<endl<<endl;

    v.push_back(8);
    cout<< v.size() <<endl;
    cout<< v.capacity() <<endl<<endl;


    //  if you want to update or access.

    cout<< v[0] <<" ";
    cout<< v[1] <<" ";
    cout<< v[2] <<" ";
    cout<< v[3] <<" "<<endl<<endl;


    v[0] = 500;     //  v[0] is updated.
    cout<< v[0] <<endl;
    

    return 0;
}

//  vectors are simply array whose size is not fixed and can be changed.

//  untill the index of any element is defined, we can not use the vector as an array. but once it is defined we can use it as an array.