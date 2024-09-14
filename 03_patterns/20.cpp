/*
decreasing number triangle.........

1
21
321
4321

output for n = 4.
*/



#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number : ";
    cin>>n;

    for (int i=1; i<=n; i++){           //  it can also be done as :-
        for (int j=1; j<=i; j++){       //  for (int j=i; j>=1; j--){
            cout<<(i-j+1);              //  cout<<j;}
        }
        cout<<endl;
    }


    return 0;
}