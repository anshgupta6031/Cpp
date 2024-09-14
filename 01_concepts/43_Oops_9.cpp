/*  Function overriding...........

    when a function of base class is redefined in it's derived class, it is called function overriding.
*/



#include <bits/stdc++.h>
using namespace std;


class Vehicle{
public:
    void show(){                //  if this function is declared as (virtual void show(){) then, line 43 will call the show function of class bike as the pointer ptr stores the address of the object which is of class bike. therefore, we can say that, virtual functions make sure the correct function is called for an object, regardless of the pointer used for calling it.
        cout<< "Vehicle ka show" <<endl;
    }
};


class Bike : public Vehicle{
public:
    void show(){                            //  function overriding....
        cout<< "Bike ka show" <<endl;
    }
};




int main(){

    Bike obj;
    obj.show();     //  Due to function overriding the function of class Bike gets executed.

    obj.Vehicle::show();      //  the function of base class can be called using scope resolution operator.


    cout<<endl;

    Vehicle *ptr;
    ptr = &obj;         //  NOTE :- pointer of data type of base class can also store the address of the derived class.

    ptr->show();            //  function of base class called using pointer (having datatype of base class but storing the address of the object of derived class.)

    ptr = new Vehicle;
    ptr->show();

    return 0;
}


/*
virtual causes the run time binding of the function.
whereas, if we don't use virtual, the binding take place in compile time.
So, if virtual is not used, the compiler already sees that the pointer is of type vehicle, even if the address of class bike is stored in it, when ever the function void is called through it, it calls the one in the vehicle class.
but if the function is specified as virtual, the function is set to be binded in run time, and during runtime the pointer stores the address of bike datatype and when the function void is called through it, it calls the one in the bike class.

NOTE :- If the base class is a virtual class, then the derived class will also be virtual by default.
*/