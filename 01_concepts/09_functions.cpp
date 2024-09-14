                                                //    SAME AS IN C LANGUAGE.



#include <iostream>
using namespace std;

void display();   // function prototype
void morning();
void night();



int main(){

    cout<<"Initializing display function\n";
    display();   // display function called.
    cout<<"Display function finished its work\n";
    morning();
    night();

    return 0;
}



void display(){                             //   function definition.
    cout<<"this is display function\n";
}

void morning(){
    cout<<"Good Morning\n";
    cout<<"This is the second function.\n";
}

void night(){
    cout<<"Good Night\n";
    cout<<"This is the third function.\n";
}