


#include <iostream>
using namespace std;

int main(){

    int marks[5];

    for (int i=0; i<5; i++){
        cout<<"Enter the marks of student "<<i+1<<endl;
        scanf("%d",&marks[i]);
    }


    for(int k: marks){              //  For each loop. It is used for traversing every element in an array.
        cout<<"marks = "<< k << endl;
    }

    
    return 0;
}