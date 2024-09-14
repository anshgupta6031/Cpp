


#include <iostream>
#include <map>                //  we have to import this library to use ordered maps.
using namespace std;

int main(){

    map<string, int> m;           //  here 'string' and 'int' are 'key', 'value' pair.

    pair<string,int> p1;                    //  we have to make pair class objects in order to insert anything into the map.
    p1.first = "Ansh";
    p1.second = 56;

    pair<string,int> p2;
    p2.first = "Guru";
    p2.second = 69;

    pair<string,int> p3;
    p3.first = "Punit";
    p3.second = 96;


    m.insert(p1);                           //  only pair can be inserted in the maps.
    m.insert(p2);                           //  while insertion the key is always sorted.
    m.insert(p3);

    for(pair<string,int> p: m){         //  elements are printed in increasing order of the key.       //  instead of writing (pair<string,int> p: m), we can write (auto p: m), 'auto' keyword is used to automatically analyse the required datatype.
        cout<< p.first <<" ,"<< p.second<<endl;
    }
    cout<< m.size() <<endl;             //  to print the size of the map.
    cout<<endl<<endl;

//*********************************************************************************************************************************************************

    m["Pankaj"] = 77;                   //  another way of inserting any element into the map using key, value pair.
    m["Rohit"] = 28;

    for(auto p: m){
        cout<< p.first <<" ,"<< p.second<<endl;
    }
    cout<< m.size() <<endl;
    cout<<endl<<endl;

//*********************************************************************************************************************************************************

    m.erase("Guru");            //  the key has to be passed in order to erase any pair from the map.

    for(auto p: m){
        cout<< p.first <<" ,"<< p.second<<endl;
    }
    cout<< m.size() <<endl;
    cout<<endl<<endl;

//*********************************************************************************************************************************************************

    if(m.find("Ansh") != m.end()){                              //  the key is what we search for in a map.
        cout << "Ansh key exists in the map." <<endl<<endl; 
    }
    else cout << "Ansh key does not exist in the map." <<endl<<endl; 

//*********************************************************************************************************************************************************

    cout<< m["Ansh"] <<endl<<endl;          //  gives the value for the passed key.


    return 0;
}


//  A map is a non linear data structure.
//  T.C for insertion, deletion, searching is O(1).
