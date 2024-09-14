


#include <bits/stdc++.h>
using namespace std;

int main(){

    vector <int> v(5);  //  here vector is initialized with a given size of 5 and all the values at corresponding indices is set as 0.

    cout<<v.size()<<" "<<v.capacity()<<endl;    //  here as the vector is initialized i.e. made with size 5, the capacity will also be 5.

    for (int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";            //  here we can see that all the values are initialized as 0.
    }

    cout<<endl;


//*********************************************************************************************************************************************************

    vector <int> v2(4,9);    //   here vector is initialized with a given size of 4 and all the values at corresponding indices is set as 9.

    for (int i=0; i<v2.size(); i++){
        cout<<v2[i]<<" ";            //  here we can see that all the values are initialized as 9.
    }

    cout<<endl;


//*****************************************************************************************************************************************************************\


    int v3[] = {2,3,5,4,3,1,1,3,3};

    int n = sizeof(v3) / sizeof(v3[0]);     //  this is how we find the size of an array.

    vector <int> arr(v3, v3 + n);           //  this is how we make a copy of an array as a vector.

    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";            
    }


    return 0;
}