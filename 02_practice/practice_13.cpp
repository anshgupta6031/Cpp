                                        //  find the second maximum number in an array.



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

    int max = arr[0];
    int smax = arr[0];

    for (int i=0; i<n; i++){
        if (arr[i]>max){
            smax = max;
            max = arr[i];
        }
    }

    cout<<"The second maximum element is : "<<smax;


    return 0;
}