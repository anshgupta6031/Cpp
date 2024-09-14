                                //  program to print all armstrong numbers between 1 and 500.

    //  if sum of the cubes of all the digits of a numbe is equal to the number itself then the number is called an armstrong number.



#include <iostream>
using namespace std;

int main(){

    int n, r, sum;

    for (int i=1; i<=500; i++){

        sum = 0;
        n = i;

        while (n>0){
            r = n%10;
            sum += (r*r*r);
            n/=10;
        }

        if (sum==i){
            cout<<i<<endl;
        }
    }


    return 0;
}