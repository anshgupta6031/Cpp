//  linear search......


#include <bits/stdc++.h>
using namespace std;

int main(){

    vector <int> v;

    int n;
    cout<<"enter the number of elements of array : ";
    cin>>n;

    cout<<"enter the elements of the array :-\n";

    for (int i=0; i<n; i++){
        int p;
        cin>>p;
        v.push_back(p);
    }

    int x,flag = 0;
    cout<<"enter the number you want to search : ";
    cin>>x;

    //  processing.........

    for (int i=0; i<n; i++){
        if (v[i]==x){
            cout<<"The number is found at the index : "<<i;
            flag = 1;
            break;
        }
    }

    if (flag==0){
        cout<<"The number is not present in the array.\n";
    }


    return 0;
}