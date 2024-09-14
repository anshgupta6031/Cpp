                                                //    SAME AS IN C LANGUAGE.

// PROGRAM TO PRINT FIRST n NATURAL NUMBERS USING DO WHILE LOOP.

#include <iostream>
using namespace std;

int main(){
    int n, i=1;
    
    cout<<"enter the number of natural numbers you want to print : ";
    cin>>n;

    do{
        cout<<i++<<endl;
    }while(i<=n);


    return 0;
}


//  do while loop first executes the program then checks the condition.
// therefore do while loop will always execute at least once.