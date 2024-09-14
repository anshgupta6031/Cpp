/*  Abstract class......
        It is a base class which has any pure virtual function.

        Pure virtual function -> a function whose decleration is in the base class and it is defined in the derived class.

        The pure virtual functions in the base class have to be overrided in the derived classes, else the object of the derived class can not be made.
        i.e. if we declare a pure virtual function in base class then there has to be a function with the same name in the derived class.


    Pure Abstract class..........
        It is a base class which only has pure virtual functions.
*/



#include <bits/stdc++.h>
using namespace std;


class Vehicle{          //  Abstract class......      //  base class......
public:

    virtual void calculate_milage() = 0;        //  decleration of pure virtual functions.....
    virtual void refuel() = 0;

};


class Bike : public Vehicle{
public:

    void calculate_milage(){                    //  definition of the pure virtual functions.......

    }

    void refuel(){

    }

};


int main(){

    Bike splender;

    
    return 0;
}