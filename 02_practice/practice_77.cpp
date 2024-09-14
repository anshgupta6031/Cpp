                                //  program to convert binary to decimal and vice versa.




#include <bits/stdc++.h>
using namespace std;


int binary_to_decimal (string str){
    int result = 0;
    int n = str.size();

    for (int i=n-1; i>=0; i--){
        char ch = str[i];
        int num = ch - '0';     //  we can also use stoi() function of string instead...

        result += (num * (1 << (n-i-1)));       //  '<<' is left shift operator. (1 << x) is same as (2^x).
    }

    return result;
}

string decimal_to_binary (int num){

    string result;

    while (num != 0){
        if (num % 2 == 0) result = '0' + result;
        else result = '1' + result;

        num = num >> 1;     //  '>>' is right shift operator. (x >> 1) is same as (x/2).
                                                //   and (x >> n) is same as (x / (2^n)).
    }
                                               //   similarly (x << 1) is same as (x*2).
    return result;                              //   and (x << n) is same as (x * (2^n)).
}


int main(){

    string str;
    cout<<"Enter a binary string : ";
    cin>>str;

    cout<< "The decimal conversion of the string is : " << binary_to_decimal (str) << endl<<endl;

    int num;
    cout<<"Enter a decimal number : ";
    cin>>num;

    cout<< "The binary conversion of the number is : " << decimal_to_binary (num) <<endl;


    return 0;
}