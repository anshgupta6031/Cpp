                                    //  Print the minimum steps to solve the Tower Of Hanoi.



#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, char s, char h, char d){          //  s -> source, d -> destination, h -> helper.
    if (n==0) return;
    hanoi (n-1, s, d, h);
    cout<< s <<" -> "<< d <<endl;
    hanoi (n-1, h, s, d);
}

int main(){

    int n;
    cout<< "Enter the no. of blocks : ";
    cin>>n;
    cout<<endl;

    hanoi(n, 'A', 'B', 'C');


    return 0;
}



//  minimum no. of steps to solve a tower of hanoi of n blocks is (2**n)-1.