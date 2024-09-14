//  Program to solve any infix expression(with brackets).
//  Ex : "1+(2+6)*4/8-3" gives 2.       //  only 2 numbers in the bracket can be solved in this program.



#include <bits/stdc++.h>
using namespace std;


int precidence(char op){
    if(op == '*' || op == '/') return 2;
    else return 1;
}

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
    stack<char> op;

    for(int i=0; i<n; i++){

        if(s[i]>=48 && s[i]<=57) val.push(s[i]-48);
        
        else{

            if((op.size() == 0) || (s[i] == '(') || (op.top()=='(')) op.push(s[i]);

            else if(s[i] == ')'){
                while (op.top() != '('){
                    char ch = op.top();
                    op.pop();

                    int val2 = val.top();
                    val.pop();

                    int val1 = val.top();
                    val.pop();

                    int ans = solve(val1, ch, val2);

                    val.push(ans);
                }
                op.pop();
            }

            else if((precidence(op.top()) < precidence(s[i]))) op.push(s[i]);

            else{
                while ((op.size() > 0) && (precidence(op.top()) >= precidence(s[i]))){
                    char ch = op.top();
                    op.pop();

                    int val2 = val.top();
                    val.pop();

                    int val1 = val.top();
                    val.pop();

                    int ans = solve(val1, ch, val2);

                    val.push(ans);
                }
                
                op.push(s[i]);
            }
        }
    }


    while (op.size() > 0){
        char ch = op.top();
        op.pop();

        int val2 = val.top();
        val.pop();

        int val1 = val.top();
        val.pop();

        int ans = solve(val1, ch, val2);

        val.push(ans);
    }


    cout<< "The sollution of the given expression is : " << val.top();


    return 0;
}