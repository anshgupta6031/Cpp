//  role of access modifiers during inheritance.....



#include <bits/stdc++.h>
using namespace std;


class A{
private:        //  can't be accessed, can't be inherited.
    int a_ka_private;

protected:      //  can't be accessed, can be inherited.
    int a_ka_protected;

public:         //  can be accessed, can be inherited.
    int a_ka_public;

};


class B : public A{         //  here public refers to those members which are inherited are public to this class.
public:

    void show(){                    //  can only access the inherited ones....
        a_ka_protected = 1;
        a_ka_public = 1;
    }

};


class C : protected A{
public:

    void show(){                    //  can only access the inherited ones....
        a_ka_protected = 1;
        a_ka_public = 1;
    }
};


class D : private A{
public:

    void show(){                    //  can only access the inherited ones....
        a_ka_protected = 1;
        a_ka_public = 1;
    }                               //  that is private can not be inherited, as we can see......
};


int main(){

    B object1;
    object1.a_ka_public = 5;        //  accessed, inherited.
//  object1.a_ka_protected = 10;          //  this is inherited but can not be accessed because it is protected for 'A' and public for 'B', which is not possible to access As it can cause a security breach. NOTE :- only members(of base class) of lower security(than derived class) can be accessed. i.e. security can not be downgraded.    //   Security ->  public < protected < private.
    
    C object2;
//  object2.a_ka_public = 10;       //  can't access, inherited.
    
    D object3;
//  object3.a_ka_public = 20;       //  can't access, inherited.


    return 0;
}