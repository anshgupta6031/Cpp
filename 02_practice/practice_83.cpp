        //  Given an integer array in which exactly 2 elements appear only once and all the other elements appear exactly twice.
        //  Find the two elements that appear only once.

/*  
    NOTE :- Some properties of xor.....
        1) x ^ x = 0
        2) x ^ 0 = x;
        3) xor is commutative. i.e. (a^b^c) = (c^a^b)
        4) if, x = a ^ b
         then, a = x ^ b
          and, b = x ^ a
*/
      



#include <bits/stdc++.h>
using namespace std;

int main(){

    vector <int> v;
    int n;

    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"Enter the elements of the vector : ";
    for (int i=0; i<n; i++){
        int p;
        cin>>p;
        v.push_back(p);
    }


    //  processing.........

    int x = 0;

    for (int i=0; i<n; i++){
        x = x ^ v[i];
    }                               //  now x is the xor of the 2 unique elements.

    int copy = x;


    int temp;
    while (x != 0){              //  to find the msb of the xor of the 2 unique elements.
        temp = x;
        x = x & (x-1);
    }                           //  temp has the last bit which gets unset.


    int idx = 0;
    while (temp != 1){
        temp /= 2;
        idx++;
    }


    int a = 0;
    for (int i=0; i<n; i++){
        if (((v[i] >> idx) & 1) == 1){      //  this is how we can find if kth bit in a number is set or not.
            a = a ^ v[i];
        }
    }

    int b = copy ^ a;

    cout << "The unique numbers are : "<< a << ", " << b <<endl;


    return 0;
}

//  Time complexity by this method is O(n). which is best if the array given is not sorted.