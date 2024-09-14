/*
binary triangle......

1
01
101
0101

output for n = 4.
*/



#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number : ";
    cin>>n;

    bool a;

    for (int i=1; i<=n; i++){

        if (i%2==0){
            a=0;
        }

        else{
            a=1;
        }

        for (int j=1; j<=i; j++){
            cout<<a;

            if (a==0){
                a=1;
            }

            else{
                a=0;
            }
        }

        cout<<endl;
    }



    return 0;
}