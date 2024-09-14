//  Inheritence..............



#include <bits/stdc++.h>
using namespace std;


class vehicle{          //  Base class (Parent class)....
public:
    int tyre_size;
    int engine_size;
    int lights;
    string company_name;

    vehicle (){
        cout<<"constructor of vehicle is called."<<endl;
    }
    
};


class car : public vehicle{     //  Derived class (child class)....    //  now, car inherits vehicle....    //   i.e. now the class car also has the properties(members) of vehicle class.
public:
    int steering_size;

    car (){                     //  whenever an object of a derived class is made, an object of the base class is also made at the back end. it is because in order to access the members of the base class there has to be an object of the base class through which the members can be inherited to the derived class.
        cout<<"constructor of car is called."<<endl;
    }

};

class scooty : public vehicle{      //  Derived class (child class)....    //  scooty inherits vehicle....
public:
    int handle_size;

    scooty (){
        cout<<"constructor of scooty is called."<<endl;
    }

};


class abc : public car, scooty{     //  multiple inheritance....       //  as here, class abc inherits both car and scooty. 

};


int main(){

    car bmw;
    bmw.tyre_size = 34;
    bmw.steering_size = 20;

    scooty activa;
    activa.lights = 5;
    activa.handle_size = 10;         //  as we can see both car and scooty class objects can access their base class's members.
    
    

    return 0;
}