/*

1234
123
12
1

output for n = 4.
*/



#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number : ";
    cin>>n;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=(n-i+1); j++){
            cout<<j;
        }
        cout<<endl;
    }


    return 0;
}