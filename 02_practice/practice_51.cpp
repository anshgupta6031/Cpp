                                                        //  Leetcode 269.

//  Majority element is th element which occures more times than half the size of array.



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

    //  processing...............

    sort(v.begin(),v.end());
    
    int middle_element = v[(n/2)];      //  after sorting the middile element will always be the one which wll be in majority.

    cout<<"The majority number in the array is : "<<middle_element<<endl;

    return 0;
}