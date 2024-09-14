/*  QUESTION :-
Given an non sorted array, v[] containing 'n' integers, the task is to find the range of an integer 'K' such that after replacing each and every 
element of the array by |v[i] - K| , results in a sorted array. If no such integer exists that satisfies the given condition, 
then print that it is not possible.
*/



#include <bits/stdc++.h>
using namespace std;


int main(){
    vector <int> v;
    int n;

    cout<<"Enter the size of the array : ";
    cin>>n;

    cout<<"Enter the elements of the array."<<endl;

    for (int i=0; i<n; i++){
        int p;
        cin>>p;
        v.push_back(p);
    }


    for (int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //  processing...............

    float k_min = (float)INT_MIN;
    float k_max = (float)INT_MAX;

    int flag = 1;

    for (int i=0; i<n-1; i++){
        if (v[i]>=v[i+1]){                                //  This condition is totally derived from mathematically solving the sorting condition v[i]<=v[i+1] for any general element i. i.e. |v[i]-k| <= |v[i+1]-k|.
            k_min = max(k_min, float((v[i]+v[i+1])) /2);
        }

        else{
            k_max = min(k_max, float((v[i]+v[i+1])) /2);
        }

        if (k_min>k_max){
            flag = 0;
            break;
        }
    }


    //  display..........


    if (k_min - (int)k_min>0){       //  so that the range is in integer form.
            k_min = int(k_min) + 1;
    }

    if (k_min>k_max){       //  checking flag now again because now k_max and k_min are int.
            flag = 0;
    }


    if (flag==0){
        cout<<"There is no value K for which the array becomes sorted.";
    }

    else{
        cout<<"Range of K is : ["<<k_min<<", "<<(int)k_max<<"]"<<endl;
    }


    return 0;
}