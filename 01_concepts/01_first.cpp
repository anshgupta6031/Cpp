


#include <iostream>
#include <iomanip>      //  including this to use setw() manipulator.
using namespace std;

int a = 55;             //  Global variable.

int main(){
    
    int a = 7;          //  Local variables.
    float b = 3.3223;
    char c = 'F';
    cout<<"Hello world"<<endl;          //  "<<" is called insersion opperator.
                                        //  endl is used for new line / line termination. We can also use \n (an escape sequence character) for new line.
    cout<<"The value of a is "<< a <<".\nAnd the value of b is "<< b <<".\n";
    cout<<"The value of c is "<< c<<endl;
    cout<<"The value of global a is : "<< ::a <<endl<<endl;          //  for obtaining the value of global variable in local scope we can use :: (scope resolution opperator).


    //  ***************************Reference variables.******************************

    float x = 455.66;
    float &y = x;       //  here y is a reference variable, which means y is nothing but an alias name of x.
    cout<<x<<endl<<y<<endl;

    y = 10.45;             //  if we change y, x also changes as both are same just the name is different.

    cout<<x<<endl<<y<<endl;

    //******************************************************************************

    cout<< (int)x<< endl<< int(x) <<endl;      //  In cpp we can typecast by either of the shown ways.


    //*************************Manipulators in cpp*********************************
    //  manipulators manipulate the display of the output.
    //  endl and setw() are manipulators.

    int p = 3, q = 23, r = 1111;
    cout<<"The value of p without setw is : "<<p<<endl;
    cout<<"The value of q without setw is : "<<q<<endl;
    cout<<"The value of r without setw is : "<<r<<endl<<endl;

    cout<<"The value of p with setw is : "<< setw(8) <<p<<endl;     //  setw makes the output right alligned with passed width of characters.
    cout<<"The value of q with setw is : "<< setw(8) <<q<<endl;
    cout<<"The value of r with setw is : "<< setw(8) <<r<<endl<<endl;

    //****************************************************************************


    int z = p++;
    cout<< z <<endl<< p <<endl;


    int jhandu = (3,4,5,6,7);       //  in such case the last value is stored.
    cout<<jhandu<<endl;


    int k=0;
    cout<< (k=50) <<endl<<endl;


    int m = 3;
    float n = 3.0;
    if(m==n){
        cout<<"m and n are equal."<<endl;
    }



    return 0;
}

//  Local and global variables can be of same name but, Local variables take precedence over global variables, in case both are present.

//  Any decimal number in cpp is treated as a double datatype as default.
//  If we want to pass any decimal number as float in a function, we have to put an 'f' or 'F' after the number to specify it as a float.
//  for example -->  3.34f
//  Similarly, for long double we use 'l' or 'L' at the end of the number.