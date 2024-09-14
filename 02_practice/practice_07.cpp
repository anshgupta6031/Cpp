



#include <iostream>
using namespace std;

void fun (int x = 7, int y = 9){        //  here 7 and 9 are default values for x and y.
    cout<<x<<" "<<y<<endl;              //  if you give a default value to any one variable then you will have to assign some default value to all the variables.
}

int main(){
    fun (4,6);      //  here passed values are printed.
    fun();          //  here default values are printed.

    fun(5);

    return 0;
}