/*

1234
2234
3334
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

        int a=i;

        for (int j=1; j<=n; j++){
            cout<<a;

            if (j>=i){
                a++;
            }
        }

        cout<<endl;
    }


    return 0;
}