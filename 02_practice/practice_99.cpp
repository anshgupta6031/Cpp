//  Program to solve any postfix expression.
//  Ex : "264*8/+3-" gives 2.



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

    cout<<"Enter any infix expression : ";
    cin>>s;

    int n = s.length();

    stack<int> val;

    for(int i=0; i<n; i++){

        if(s[i]>=48 && s[i]<=57) val.push(s[i]-48);
        
        else{
            int val2 = val.top();
            val.pop();

            int val1 = val.top();
            val.pop();

            char op = s[i];

            int ans = solve(val1, op, val2);

            val.push(ans);
        }
    }


    cout<< "The sollution of the given expression is : " << val.top();


    return 0;
}