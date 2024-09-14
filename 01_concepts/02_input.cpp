


#include <iostream>
using namespace std;

int main(){

    int a,b;

    cout<<"Enter a number : ";   //  "<<" is called insersion opperator.
    cin>>a;                      //  ">>" is called extraction opperator.

    cout<<"Enter another number : ";
    cin>>b;

    cout<<"The sum is "<< a+b<<endl;

    float x=5, y=2;
    cout<<x/y<<endl;              //   In cpp float shows the output after the decimal only upto where the digits are non zero.

    bool m = true, n = 0;           //   In bool any number(even negative or decimal) except zero is true or 1.
    cout<< m << endl << n << endl << (7>8);


//  Some properties of modulus opperator.

    //  a % (-b) = a % b
    //  (-a) % b = -(a % b)

    return 0;
}