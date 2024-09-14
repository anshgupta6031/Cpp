                                                //  A PROGRAM TO SWAP 2 NUMBERS.



#include <bits/stdc++.h>
using namespace std;

void wrong_swap(int a, int b){           // this will not work as a copy of x and y is passed in a and b parameters.
    int temp;                            // we can also do it without temp variable as follows :-
    temp = b;                            //    a = a + b;
    b = a;                               //    b = a - b;
    a = temp;                            //    a = a - b;
}

void swap(int *a, int*b){             // this will work due to call by reference.
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;    
}

void another_swap (int &a, int &b){     //  this will also work as this is an other version of call by reference.
    int temp;                           //  it is not logical but, it is what it is.
    temp = b;
    b = a;
    a = temp;    
}

int main(){

    int x=3 , y=4;

    cout<<"The value of x and y before swap is "<< x <<" and "<< y <<endl;
    
    wrong_swap(x,y);
    cout<<"The value of x and y after wrong_swap is "<< x <<" and "<< y <<endl;
    
    swap(&x,&y);
    cout<<"The value of x and y after swap is "<< x <<" and "<< y <<endl;

    another_swap(x,y);
    cout<<"The value of x and y after another_swap is "<< x <<" and "<< y <<endl;

    return 0;
}