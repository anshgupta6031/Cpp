//   Friend functions........
//   It is declared in the class and defined outside the class as a function.



#include <bits/stdc++.h>
using namespace std;


class A{
private:
    int a_ka_private = 10;

public:
    friend void show(A &obj);       //  defining a friend function......        //  by the help of friend functions we can access the private members of the class through it from outside the class by simply overriding the function outside.

};


void show(A &obj){                 //   overriding the defined friend function.....      //  this function is not the part of the class but can still access the private members of the class.
    cout<< obj.a_ka_private <<endl;
}


int main(){

    A obj;

    show(obj);


    return 0;
}