//  Program to convert any prefix expression to a postfix expression.
//  Ex : "-+2/*6483" gives "264*8/+3-".



#include <bits/stdc++.h>
using namespace std;


string solve(string val1, char op, string val2){
    string ans = "";

    ans += val1;
    ans += val2;
    ans.push_back(op);

    return ans;
}


int main(){

    string s;

    cout<<"Enter any prefix expression : ";
    cin>>s;

    int n = s.length();

    stack<string> val;

    for(int i=n-1; i>=0; i--){

        if(s[i]>=48 && s[i]<=57) val.push(to_string(s[i]-48));
        
        else{
            string val1 = val.top();
            val.pop();

            string val2 = val.top();
            val.pop();

            char op = s[i];

            string ans = solve(val1, op, val2);

            val.push(ans);
        }
    }


    cout<< "The postfix of the given expression is : " << val.top();


    return 0;
}