


#include <iostream>
using namespace std;

int main(){

    pair<string, char> p;           //  inbuilt pair class in c++. It can be used to pair any 2 datatypes.
    pair<string, int> q;
    pair<int, int> r;

    p.first = "ansh";
    p.second = 'A';
    cout<< p.first << ", "<< p.second<<endl<<endl;

    q.first = "ansh";
    q.second = 7;
    cout<< q.first << ", "<< q.second<<endl<<endl;

    r.first = 5;
    r.second = 7;
    cout<< r.first << ", "<< r.second<<endl<<endl;


    return 0;
}