//  Program to convert any infix expression(without brackets) to a prefix expression.
//  Ex : "2+6*4/8-3" gives "-+2/*6483".



#include <bits/stdc++.h>
using namespace std;


int precidence(char op){
    if(op == '*' || op == '/') return 2;
    else return 1;
}

string solve(char op, string val1, string val2){
    string ans = "";

    ans.push_back(op);
    ans  = ans + val1 + val2;

    return ans;
}


int main(){

    string s;

    cout<<"Enter any infix expression : ";
    cin>>s;

    int n = s.length();

    stack<string> val;
    stack<char> op;

    for(int i=0; i<n; i++){

        if(s[i]>=48 && s[i]<=57) val.push(to_string(s[i]-48));
        
        else{

            if((op.size() == 0) || (precidence(op.top()) < precidence(s[i]))) op.push(s[i]);

            else{
                while ((op.size() > 0) && (precidence(op.top()) >= precidence(s[i]))){
                    char ch = op.top();
                    op.pop();

                    string val2 = val.top();
                    val.pop();

                    string val1 = val.top();
                    val.pop();

                    string ans = solve(ch, val1, val2);

                    val.push(ans);
                }
                
                op.push(s[i]);
            }
        }
    }


    while (op.size() > 0){
        char ch = op.top();
        op.pop();

        string val2 = val.top();
        val.pop();

        string val1 = val.top();
        val.pop();

        string ans = solve(ch, val1, val2);

        val.push(ans);
    }


    cout<< "The prefix of the given expression is : " << val.top();


    return 0;
}