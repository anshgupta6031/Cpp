/*
pascal triangle...........
                                             0 1 2 3 4                  //   if we see it like this then every time iCj is being printed.
1      1                                  0  1
2     1 1                                 1  1 1
3    1 2 1                                2  1 2 1
4   1 3 3 1                               3  1 3 3 1
5  1 4 6 4 1                              4  1 4 6 4 1

 output for n = 4.
*/



#include <iostream>
using namespace std;

int factorial (int a){
    int f=1;
    for (int i=1; i<=a; i++){
        f*=i;
    }

    return f;
}


int combination (int n, int r){
    return ( factorial(n) / (factorial(n-r) * factorial(r)) );
}


int main(){

    int n;
    cout<<"enter a number : ";
    cin>>n;

    for (int i=0; i<=n; i++){
        for (int j=1; j<=(n-i); j++){
            cout<<" ";
        }

        for (int k=0; k<=i; k++){
            cout<< combination(i,k) <<" ";      //   every time iCk is printed followed by a space.
        }

        cout<<endl;
    }


    return 0;
}