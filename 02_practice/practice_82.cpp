        //  Given an integer array where every element occurs twice except one occurs only once. Find that unique number.

/*  
    NOTE :- 
        1) x ^ x = 0
        2) x ^ 0 = x;
        3) xor is commutative. i.e. (a^b^c) = (c^a^b)
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
    }

    cout<<"The unique number is : "<< x <<endl;


    return 0;
}

//  Time complexity by this method is O(n). which is best if the array given is not sorted.
//  If the array is sorted, it can be solved using binary search in O(log n) time complexity.