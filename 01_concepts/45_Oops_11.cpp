//   Operator overloading.....




#include <bits/stdc++.h>
using namespace std;


class Complex_number{
public:
    int real;
    int imaginary;

    Complex_number add (Complex_number &c1){        //  one way of adding 2 complex numbers........
        Complex_number c3;
        c3.real = c1.real + this->real;
        c3.imaginary = c1.imaginary + this->imaginary;

        return c3;
    }



    Complex_number operator + (Complex_number &c){                 //  operator overloading.......
        Complex_number c3;
        c3.real = c.real + this->real;
        c3.imaginary = c.imaginary + this->imaginary;

        return c3;
    }


    Complex_number operator - (Complex_number &c){                 //  operator overloading.......
        Complex_number c3;
        c3.real = this->real - c.real;
        c3.imaginary = this->imaginary - c.imaginary;

        return c3;
    }
};


int main(){

    Complex_number c1, c2;

    c1.real = 5;
    c1.imaginary = 17;

    c2.real = 10;
    c2.imaginary = 3;



    Complex_number c3 = c2.add(c1);

    cout<< "real : "<< c3.real << "   "<< "imaginary : "<< c3.imaginary <<endl<<endl;



    Complex_number c4;
    c4 = c1 + c2;               //  the + operator is overloaded such that it adds up two complex numbers.

    cout<< "real : "<< c4.real << "   "<< "imaginary : "<< c4.imaginary <<endl<<endl;



    Complex_number c5;
    c5 = c1 - c2;               //  the - operator is overloaded such that it subtracts two complex numbers.

    cout<< "real : "<< c5.real << "   "<< "imaginary : "<< c5.imaginary <<endl<<endl;


    return 0;
}



/*
    Some operators can not be overloaded......
    those are :-
        1) .                ->      member operator
        2) ?:               ->      ternary operator
        3) ::               ->      scope resoluion operator
        4) sizeof

*/