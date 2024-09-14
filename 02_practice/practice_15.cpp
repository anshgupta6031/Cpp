                        //  Find the doublet in the vector whose sum is equal to the given value 'x'.



#include <bits/stdc++.h>
using namespace std;

int main(){

    vector <int> v;
    int n;

    cout<<"enter the number of elements : ";
    cin>>n;

    cout<<"enter the elements of the vector :- ";
    for(int i=0; i<n; i++){
        int p;
        cin>>p;
        v.push_back(p);
    }

    int x;
    cout <<"enter the sum of the dublet : ";
    cin>>x;

    //  processing...........

    cout<<"The indices of the dublet pairs are :-\n";

    for (int i=0; i<n; i++){
        for (int j=(i+1); j<n; j++){
            if ((v[i]+v[j]) == x){
                cout << "(" <<i<<", "<<j<< ")" <<endl;
            }
        }
    }


    return 0;
}