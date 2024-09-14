/*

4444
3334
2234
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

        int a=(n-i+1);

        for (int j=1; j<=n; j++){
            cout<<a;

            if (j>=(n-i+1)){
                a++;
            }
        }

        cout<<endl;
    }


    return 0;
}