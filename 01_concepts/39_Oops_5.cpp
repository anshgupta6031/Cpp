/*
polymorphism

    It is of two types :-
    1) compile time polymorphism.
    2) run time polymorphism.

    In compile time polymorphism we study about :-
    1) function overloading.
    2) constructor overloading.
    3) operator overloading.

    In run time polymorphism we study about :-
    1) function overriding.

*/


/*
    compile time polymorphism :-

        1) Function overloading -> creating functions with same name but having different parameters.

        2) Constructor overloading -> creating many constructors with different parameters in the same class. so that, the objects can call different constructor by just giving different parameters. 

*/




#include <bits/stdc++.h>
using namespace std;


int add(int a, int b){
    return a+b;
}

int add(int a){         //  Function overloading....    //  the function with same name is right to make as long as the parameters are different.
    return a+10;
}


class bike{
public:
    int tyre_size;
    int engine_size;

    bike(int tyre_size, int engine_size){
        this->tyre_size = tyre_size;
        this->engine_size = engine_size;
    }

    bike(int tyre_size){
        this->tyre_size = tyre_size;
        this->engine_size = 0;
    }

    bike(){                   //   Constructor overloading....    //  here 3 constructors are declared in the same class but they have different parameters.
        this->tyre_size = 0;
        this->engine_size = 0;
    }

};


int main(){

    cout<< add(1,2) <<endl<< add(5) <<endl;     //  both the functions are called with the same name by just giving different parameters.

    bike royal_enfield(30,100);         //  different constructors are called by just giving different parameters.
    bike bajaj(20);
    bike bmw;

    

    return 0;
}