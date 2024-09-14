/*

1111
1222
1233
1234

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
            cout<< min(i,j);            //   min(a,b) and max(a,b) are builtin functions which can be used to find the min or max of given numbers.
        }
        cout<<endl;
    }


    return 0;
}