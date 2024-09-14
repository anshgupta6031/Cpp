



#include <bits/stdc++.h>
using namespace std;


class Node{
public:

    int val;
    Node *next;         //  each node is connected to its next node through its address.

    Node (int val){                 //  paramterised constructor........
        this -> val = val;
        this -> next = NULL;          //  setting default address in every node as null to avoid any garbage value in it.
    }

};


int main(){

    //  Making nodes.............

    Node a(10);     //  accessing val through the constructor.
    Node b(20);
    Node c(30);
    Node d(40);


    //  Forming linked list...........

    a.next = &b;
    b.next = &c;
    c.next = &d;
//  d.next = NULL;      //  no need to write this as due to line 17, it is already null.


    //  Using Linked list............

    cout<< b.val <<endl;
    cout<< (*(a.next)).val <<endl;         //  accessing b.val through a's next's address.
    cout<< a.next->val <<endl<<endl;          //  it is same as the previous line.


    a.next->val = 500;          //  changing the value of node b using node a
    cout<< a.next->val <<endl<<endl;
    a.next->val = 20;


    cout<< a.next->next->val <<endl;         //  accessing c.val through a.
    cout<< a.next->next->next->val <<endl<<endl;      //  accessing d.val through a.


    //  accessing all values through a using loop.

    Node temp = a;

    while (1){
        cout<< temp.val << " ";

        if (temp.next == NULL) break;

        temp = *(temp.next);
    }


    return 0;
}