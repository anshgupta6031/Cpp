//  static variables and static functions in Oops........



#include <bits/stdc++.h>
using namespace std;


class bike{
public:
    static int no_of_bikes;         //  static variables are only declared once, i.e it will always be same and will not be made different for different objects.
    int tyre_size;
    int engine_size;

    bike(int tyre_size, int engine_size) : tyre_size(this->tyre_size), engine_size(this->engine_size){}     //  shorter way for making parameterized constructor. it is known as initialisation list.

    static void increase_no_of_bikes(){         //  static members can only be accessed by static functions.
        no_of_bikes++;
    }

};
int bike :: no_of_bikes = 10;


int main(){

    bike royal_enfield(30,100);
    bike bajaj(20,90);

    cout<< bike :: no_of_bikes <<endl;              //  static variable accessed through the class.....
    royal_enfield.increase_no_of_bikes();
    cout<< royal_enfield.no_of_bikes <<endl;

    bajaj.increase_no_of_bikes();       //  no matter with what object the static function is called with. As it belongs to the class, the same static variable gets incremented.
    cout<< bajaj.no_of_bikes <<endl;
    
    bike :: increase_no_of_bikes();             //  static function accessed through the class.....
    cout<< bike :: no_of_bikes <<endl;


    return 0;
}

//  NOTE :- all static members belong to the class not object.