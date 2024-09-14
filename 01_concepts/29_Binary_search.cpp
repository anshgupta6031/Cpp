                                                //  Binary search...........

//  Binary search only works for a sorted array (asscending or descending).



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
    cout<<"enter the number you want to search : ";
    cin>>x;

    //  processing............

    sort(v.begin(),v.end());

    int l = 0, r = (n-1);
    int flag = 0;
    
    while (r>=l){

        int mid = (l+r)/2;          //  as here (l+r) is calculated first, therefore if l and r are too big integers it will not be able to be stored in the memory to be able to divide it by 2 later. Therefore, for optimizing it more, we can write ( mid = l + (r-l)/2 ). as it is the same thing, but here, (r-l) can now be stored as an integer variable no matter how long l and r integers are.

        if (v[mid]==x){
            cout<<"The number is found at index : "<<mid<<endl;
            flag = 1;
            break;
        }

        else if (v[mid]>x){
            r = mid - 1;
        }

        else if (v[mid]<x){
            l = mid + 1;
        }
    }

    if (flag == 0){
        cout<<"The number is not found in the array.\n";
    }


    return 0;
}

