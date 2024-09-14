//  Program to convert any postfix expression to a infix expression.
//  Ex : "264*8/+3-" gives "2+6*4/8-3".



#include <bits/stdc++.h>
using namespace std;


string solve(string val1, char op, string val2){
    string ans = "";

    ans += val1;
    ans.push_back(op);
    ans += val2;

    return ans;
}


int main(){

    string s;

    cout<<"Enter any postfix expression : ";
    cin>>s;

    int n = s.length();

    stack<string> val;

    for(int i=0; i<n; i++){

        if(s[i]>=48 && s[i]<=57) val.push(to_string(s[i]-48));
        
        else{
            string val2 = val.top();
            val.pop();

            string val1 = val.top();
            val.pop();

            char op = s[i];

            string ans = solve(val1, op, val2);

            val.push(ans);
        }
    }


    cout<< "The infix of the given expression is : " << val.top();


    return 0;
}