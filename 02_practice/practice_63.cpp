                                        //  Print the elements of array by recursion.



#include <bits/stdc++.h>
using namespace std;

void print (int arr[], int n){
    if (n==0) return;
    print(arr, n-1);
    cout<<arr[n-1] <<" ";
}

int main(){

    int arr[] = {2,3,4,6,7,5,3,5,6,8,5,5,4,3,2,3,5,8,4,2,6,9,0,1,3,0,7,3,2,52,4,5,6,1,41,54,5,1,1,5,5,4,2,2};

    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, n);

    return 0;
}