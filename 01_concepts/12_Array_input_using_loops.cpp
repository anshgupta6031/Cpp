                                    //  ARRAY INPUT USING LOOP.
                                    //  same as in C.



#include <bits/stdc++.h>
using namespace std;

int main(){

    int marks[5];

    for (int i=0; i<5; i++){
        cout<<"Enter the marks of student "<<(i+1)<<endl;
        cin>> marks[i];
    }

    for (int i=0; i<5; i++){
        cout<<"The marks of student "<<(i+1) <<" is "<<marks[i]<<endl;
    }


    return 0;
}


/*

Array can be initialised as follows -:

int abc[3] = {33,66,88};
or
int abc[] = {77,88,99,00,55,.............no definite amount of integers};

*/