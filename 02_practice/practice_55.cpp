//  Find the smallest missing +ve number in a +ve sorted array.



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


    //  processing............

    sort(v.begin(),v.end());

    int lo = 0, hi = (n-1);

    int ans;

    if (v[n-1]==n-1) cout<<"no element found.";
    
    while (hi>=lo){

        int mid = (lo+hi)/2;

        if (v[mid]==mid){
            lo = mid + 1;
        }

        else if (v[mid]>mid){
            ans = mid;
            hi = mid - 1;
        }
    }

    cout<<ans;

    return 0;
}

