                                                //  print all the factors of a number.



#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;


    for (int i=1; i<sqrt(n); i++){
        if (n%i == 0){
            cout<< i << " ";
        }
    }

    for (int i=sqrt(n); i>=1; i--){
        if (n%i == 0){
            cout<< n/i << " ";
        }
    }


    return 0;
}


//  T.C = O(sqrt(n)).