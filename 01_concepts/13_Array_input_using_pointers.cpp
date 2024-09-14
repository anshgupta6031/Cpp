                                    //   ARRAY INPUT USING POINTERS.



#include <bits/stdc++.h>
using namespace std;

int main(){

    int marks[4];
    int *ptr = &marks[0];

    for (int i=0; i<4; i++){
        cout<<"Enter the marks of student "<< i+1 <<" :- ";
        cin >> *ptr;
        ptr++;                      //   ptr++ for integer or float adds up 4 in the address of marks[0] (as int and float consume 4 bytes of storage) so to get address of marks[1].
    }                               //   in case of char ptr++ would only add 1 in its address as char uses only 1 byte of storage.

    ptr = &marks[0];

    for (int i=0; i<4; i++){
        cout<<"The marks of student "<< i+1<<" is " << i[ptr]<<endl;    //  we can print it like this also.
    } 

    return 0;
}