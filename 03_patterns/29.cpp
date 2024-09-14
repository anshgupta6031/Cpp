/*

4321
4322
4333
4444

output for n = 4.
*/



#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number : ";
    cin>>n;

    for (int i=1; i<=n; i++){

        int a=n;

        for (int j=1; j<=n; j++){
            cout<<a;

            if (j<=(n-i)){
                a--;
            }
        }

        cout<<endl;
    }


    return 0;
}