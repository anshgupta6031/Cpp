/*
alphabet square......

ABCD
ABCD
ABCD
ABCD

output for n = 4.
*/



#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number : ";
    cin>>n;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cout<< char(j+64);
        }
        cout<<endl;
    }


    return 0;
}