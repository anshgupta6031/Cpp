/*
binary triangle alter......
  12345
1 1                                                    //   observation :-
2 01                                                        
3 101                                                       1 comes when both i and j are either even or both are odd.
4 0101                                                      therefore form maths we know........
5 10101                                                     if both 2 given numbers are even or odd, their sum is always even.
                                                            therefore, (i+j)%2 = 0.
output for n = 4.
*/



#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number : ";
    cin>>n;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){

            if (((i%2==0)&&(j%2==0)) || ((i%2!=0)&&(j%2!=0))){      //  we can also use the above mentioned condition (line 9).
                cout<<1;
            }

            else{
                cout<<0;
            }
        }
        cout<<endl;
    }


    return 0;
}