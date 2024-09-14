


#include <bits/stdc++.h>
using namespace std;

void display(deque<int> &dq){

    for(int i=1; i<=dq.size(); i++){
        int x = dq.front();

        cout<< x <<" ";
        dq.pop_front();

        dq.push_back(x);
    }
}

int main(){

    deque<int> dq;

    dq.push_back(10);             //  happens at rear/back....
    dq.push_back(20);
    dq.push_back(30);
    display(dq);
    cout<<endl;

    dq.push_front(40);             //  happens at front....
    dq.push_front(50);
    dq.push_front(60);
    display(dq);
    cout<<endl<<endl;

    cout<< dq.front() <<endl;
    cout<< dq.back() <<endl;
    cout<< dq.size() <<endl<<endl;

    dq.pop_front();            //  happens at front........
    display(dq);
    cout<<endl;
    cout<< dq.size() <<endl<<endl;

    cout<< dq.empty() <<endl<<endl;          //  returns true if the deque is empty.

    display(dq);
    cout<<endl;

    dq.pop_back();
    display(dq);
    cout<<endl;

    dq.push_back(70);
    display(dq);
    cout<<endl<<endl;


    return 0;
}