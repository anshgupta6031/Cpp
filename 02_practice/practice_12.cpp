                                            //  find the maximum number in an array.



#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    int arr[n];

    cout<<"enter the elements of the array."<<endl;

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int max = arr[0];   //  always take max = first element instead of taking it zero as there will not be any mistakes even if the numbers are negative.

    for (int i=0; i<n; i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }

    cout<<"The maximum element is : "<<max;


    return 0;
}