/*
palindrome number pyramid........

   1
  121
 12321
1234321

output for n = 4.
*/



#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number : ";
    cin>>n;

    for (int i=1; i<=n; i++){

        int a=1, flag=1;

        for (int j=1; j<=(n-i); j++){
            cout<<" ";
        }

        for (int k=1; k<=(2*i - 1); k++){
            cout<<a;

            if (a==i){          //  flag changes when a reachess max, so that it can be decreased now.
                flag = 0;
            }

            if (flag == 1){
                a++;
            }

            else{
                a--;
            }
        }

        cout<<endl;
    }


    return 0;
}