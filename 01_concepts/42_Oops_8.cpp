/*   Diamond problem......      //  Important for interviews.......
    When 2 instances of base class are present in the derived class......

    example :-
        if (B inherits A), (C inherits A) and (D inherits B and C).

        now the problem is that D has 2 instances of A.
        one that came through B, and other that came through C.
*/




#include <bits/stdc++.h>
using namespace std;


class A{
public:
    int a_ka_public;
};


class B : virtual public A{                 //  if we inherit the class using virtual, then only one instance of each member is made in the derived class.
public:

};


class C : virtual public A{
public:

};


class D : public B, C{
public:
    int show(){  
//      B :: a_ka_public = 10;      //  another way of solving (without using virtual) is to specify which instance you want to access.

        a_ka_public = 10;           //   only one instance of the members of A is made(by using virtual class).

        return a_ka_public;
    }
};


int main(){

    D obj;
    cout<< obj.show() <<endl;


    return 0;
}