//  constructors and destructors.........



#include <bits/stdc++.h>
using namespace std;


class bike{
public:
    int tyre_size;

    bike(){                     //  self made default constructor.....      //  it is defined similar as a function, the return type is 'bike'(class) and it has no name.
        cout<<"constructor is called."<<endl;
    }

    ~bike(){                    //  self made destructor........
        cout<<"destructor is called."<<endl;
    }

};


class car{
public:
    int tyre_size;
    int engine_size;

    car(int tyre_size, int engine_size){                     //  Parameterized constructor.....
        this->tyre_size = tyre_size;
        this->engine_size = engine_size;
    }

    ~car(){
        cout<<"destructor is called."<<endl;
    }

    car(car &b){                                            //  copy constructor........
        this->tyre_size = b.tyre_size;
        this->engine_size = b.engine_size;
    }

};


int main(){

    bike tvs;       //  whenever an object is created the constructor is called to create the object.
    bike honda;


    car lembo(13,200);      //  making object using parameterized constructor.......
    car jaguar(15,100);

    if (true){
        car bmw(18,150);
        cout<<endl<< bmw.tyre_size <<" "<< bmw.engine_size <<endl;
    }                           //  here the destructor for object bmw is called as it goes out of scope at this point of time.

    cout<<endl<< lembo.tyre_size <<" "<< lembo.engine_size <<endl;
    cout<< jaguar.tyre_size <<" "<< jaguar.engine_size <<endl<<endl;


//  car abc = lembo;        //  this is done by copy constructor which makes a deep copy.
    car abc(lembo);         //  this is another way of using copy constructor.
    cout<< abc.tyre_size <<endl;
    lembo.tyre_size = 0;
    cout<< abc.tyre_size <<endl;
    cout<< lembo.tyre_size <<endl;


    return 0;
}


/*  constructors are the hidden functions responsible for the creation of an object and for the memory allocation to the object.
    The constructor is called whenever an object is created.

    They are of 3 types :-

    1) Default constructor.                 //  These are built in by default.
    2) Parameterized constructor.
    3) Copy constructor.
*/


/*  destructors are the hidden functions responsible for the destruction of an object to free up the memory.
    The destructor gets called for every created object when it goes out of scope.
*/


/*
    there are 2 types of copy :-

    1) shallow copy -> in this type of copy both the copies point at the same memory address. so, whenever one copy is altered the other gets altered too.
    2) deep copy -> in this type of copy, another memory is allocated for the copy and the data is copied to that memory location.
*/ 