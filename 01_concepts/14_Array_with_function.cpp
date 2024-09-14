


#include <bits/stdc++.h>
using namespace std;


void printarray(int *ptr, int n){  // n is the size of the array.

    cout<<"The elements of array are :-\n";
    for (int i=0; i<n; i++){
        cout<< *(ptr+i) <<" ";
    }
}

void change (int arr[10]){
    arr[0]=50000;
}



int main(){

    int array[] = {33,44,55,66,77,88,33,22,44,11};
    printarray(array,10);       //  here array is same as &array[0].
                                //  as the address of array is passed it is called by reference.
    
    change(array);      //  here the value is changed as called by reference.

    cout<<"\n\n\n";

    printarray(array,10);

    return 0;
}