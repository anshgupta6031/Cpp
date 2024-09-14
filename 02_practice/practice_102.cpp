//  Program to solve any prefix expression.
//  Ex : "-+2/*6483" gives 2.



#include <bits/stdc++.h>
using namespace std;


int solve(int val1, char op, int val2){

    if (op == '+') return val1 + val2;
    else if (op == '-') return val1 - val2;
    else if (op == '*') return val1 * val2;
    else if (op == '/') return val1 / val2;
}


int main(){

    string s;

    cout<<"Enter any prefix expression : ";
    cin>>s;

    int n = s.length();

    stack<int> val;

    for(int i=n-1; i>=0; i--){

        if(s[i]>=48 && s[i]<=57) val.push(s[i]-48);
        
        else{
            int val1 = val.top();
            val.pop();

            int val2 = val.top();
            val.pop();

            char op = s[i];

            int ans = solve(val1, op, val2);

            val.push(ans);
        }
    }


    cout<< "The sollution of the given expression is : " << val.top();


    return 0;
}