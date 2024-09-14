                                                    //    ARRAY INPUT.
                                                    //   same as in C.



#include <bits/stdc++.h>
using namespace std;

int main(){

    int marks[4];   // allocate space for 4 integers.
    cout<<"enter the marks of 4 students.\n";

    cin>> marks[0]>>marks[1]>>marks[2]>>marks[3];

    cout<<"The entered marks are : "<< marks[0] <<" "<< marks[1] <<" "<< marks[2]<<" and "<< marks[3]<<endl;

    int n = sizeof(marks) / sizeof(marks[0]);       //  we can find the size of the array like this.
    cout<<"size of the array marks is : "<<n;


    return 0;
}

//  in cpp, 'marks' and '&marks' are same as they both give the address of the first byte of the first element of the marks array.

// NOTE :- the size of array is always fixed, it can not be changed.