                                        //   function to find hcf of 2 numbers.
            


#include <bits/stdc++.h>
using namespace std;

int hcf (int a, int b){
    
    for (int i=(min(a,b)); i>=1; i--){
        if ((a%i==0) && (b%i==0)){
            return i;
        }
    }
}

int main(){

    int x,y;

    cout<<"enter two numbers\n";
    cin>>x>>y;

    cout<<hcf(x,y);

    return 0;
}