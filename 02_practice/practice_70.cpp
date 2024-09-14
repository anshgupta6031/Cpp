                                            //  Find HCF using recursion.
                                    //  By Using Euclid's Division algorithm




#include <bits/stdc++.h>
using namespace std;

int hcf (int a, int b){
    if (a==0) return b;
    return hcf (b%a, a);
}

int main(){

    int a,b;
    cout<<"enter two numbers :-"<<endl;
    cin>>a>>b;

    cout<<"The HCF is : "<<hcf(a,b);

    return 0;
}

//  the time complexity for this code is O(log(a+b)).