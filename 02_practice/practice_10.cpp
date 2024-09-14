            //   make a function to find out the first and the last digit of a number without returning anything.



#include <bits/stdc++.h>
using namespace std;

void func (int n, int *first, int *last){
    *last = n % 10;

    while (n>0){
        *first = n;
        n/=10;
    }
}

int main(){

    int n, first, last;

    cout<<"enter a number : ";
    cin>>n;

    func(n, &first, &last);

    cout<<"First digit = "<<first <<endl;
    cout<<"last digit = "<<last;


    return 0;
}