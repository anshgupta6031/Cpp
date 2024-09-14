/*
odd number triangle........

1
13
135
1357

output for n = 4.
*/



#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number : ";
    cin>>n;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=i;j++){
            cout<< (2*j - 1);
        }
        cout<<endl;
    }


    return 0;
}