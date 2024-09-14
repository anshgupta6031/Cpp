//  Operetor overloading using friend function...... 



#include <bits/stdc++.h>
using namespace std;


class Complex_number{
public:
    int real;
    int imaginary;

    friend Complex_number operator + (Complex_number &c1, Complex_number &c2);         //  function decleration.........

};


Complex_number operator + (Complex_number &c1, Complex_number &c2){         //  function definition.....        //  overriding the friend function.......
    Complex_number c3;
    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;

    return c3;
}


int main(){

    Complex_number c1, c2;

    c1.real = 5;
    c1.imaginary = 17;

    c2.real = 10;
    c2.imaginary = 3;


    Complex_number c4;
    c4 = c1 + c2;

    cout<< "real : "<< c4.real << "   "<< "imaginary : "<< c4.imaginary <<endl<<endl;


    return 0;
}