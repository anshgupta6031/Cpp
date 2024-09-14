//  Given a sorted integer array and an integer 'x', find the lower and upper bound of x. Using binary search method so that time complexity is less.



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

    int x;
    cout<<"enter the number x : ";
    cin>>x;

    //  processing............

    sort(v.begin(),v.end());

    int lo = 0, hi = (n-1);
    int flag = 0;

    int upper_bound, lower_bound;
    
    while (hi>=lo){

        int mid = (lo+hi)/2;

        if (v[mid]==x){     //  if the number is found.
            flag = 1;
            lower_bound = v[mid-1];
            upper_bound = v[mid+1];
            break;
        }

        else if (v[mid]>x){
            hi = mid - 1;
        }

        else if (v[mid]<x){
            lo = mid + 1;
        }
    }

    if (flag == 0){
        lower_bound = v[hi];
        upper_bound = v[lo];
    }

    cout<<"The lower bound of x is : "<<lower_bound<<endl;
    cout<<"The upper bound of x is : "<<upper_bound;


    return 0;
}

