/*
Floyd's triangle........

1
23
456
78910

output for n = 4.
*/



#include <iostream>
using namespace std;

int main(){

    int n, a=1;
    cout<<"enter a number : ";
    cin>>n;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<< a++;
        }
        cout<<endl;
    }



    return 0;
}