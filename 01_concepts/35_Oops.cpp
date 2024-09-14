//  Object oriented programming is a methodology to design a program using classes and objects.

/*  using oops the following concepts can be achieved :-

    1) Data abstraction         ->      hiding those things from the user which is not required to him.
    2) Data encapsulation       ->      comprising many things in one.
    3) Inheritance              ->      inheriting properties from the parent.
    4) Polymorphism             ->      using the same thing in many forms.
*/

//   class is a user defined datatype.
//   A class is a collection of variables of different data types under a single name.



#include <bits/stdc++.h>
using namespace std;


class player{               //  now player is a new user defined datatype which can be used like other datatypes.       //  NOTE :- no memory is assigned to it as of now, it is just a blueprint for the object.
    public :                //  here 'public' is a access modifier.         //  refer to the end of program for more details....

    string name;        //  these are called 'data members'.
    int health;
    int score;

    void show_details(){                //  a function can also be defined in the class. It is called 'member function'.
        cout<<"name = "<< name <<endl;
        cout<<"health = "<< health <<endl;
        cout<<"score = "<< score <<endl<<endl;
    }

};                          //  NOTE :- this semicolon is important.....


int main(){

    player p1;      //  here p1 is an object(variable) of player(class) datatype.       //  now the memory has been assigned for the object p1.
    p1.name = "Ansh";       //  this is how we assign values to the members of the object.
    p1.health = 50;
    p1.score = 100;

    cout<<"p1 name = "<< p1.name <<endl;
    cout<<"p1 health = "<< p1.health <<endl;
    cout<<"p1 score = "<< p1.score <<endl<<endl;


    player india[11];       //  an array of player datatype can also be declared.
    india[0].name = "Virat Kohli";
    cout<< india[0].name <<endl<<endl;


    p1.show_details();      //  member function called for object p1.


    return 0;
}



/*
    Access modifiers :-
        It decides if the class can be accessed from outside the class.
        These are of 3 types :-

        1) public       ->      can be accessed from outside.
        2) private      ->      can not be accessed from outside.
        3) protected    ->      can not be accessed from outside but can be inherited.

        these are used for data abstraction.

        private is the default access modifier. i.e if there is no access modifier specified then it is private by default.
*/