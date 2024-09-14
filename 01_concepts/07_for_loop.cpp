                                                //    SAME AS IN C LANGUAGE.

// PROGRAM TO PRINT FIRST n NATURAL NUMBERS USING FOR LOOP.


#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of natural numbers you want to print : ";
    cin>>n;

    for(int a=1; a<=n; a++){     // in for loop we first define a variable then write the condition and then write the increment syntax accordingly, and all this is done in only one line.
        cout<<a<<endl;
    }


    return 0;
}