



#include <bits/stdc++.h>
using namespace std;


class Node{
public:

    int val;
    Node *next;
    Node *prev;         //  also stores the previous node's address.

    Node (int val){
        this -> val = val;
        this -> next = NULL;
        this -> prev = NULL;
    }

};


void display (Node *head){      //  Display function using head.....

    while (head != NULL){
        cout<< head->val << " ";

        head = head->next;
    }

    cout<<endl;
}


void display_2 (Node *head){        //  Display function using head called recursively.

    if (head == NULL) return;

    cout<< head->val << " ";

    display_2(head->next);
}


void display_3 (Node *n){      //  Display function using any given node.....

    while (n->prev != NULL){
        n = n->prev;
    }                           //  now Node 'n' has become the head node....

    display(n);
}

//****************************************************************************************************************************************************


void reverse_display (Node *head){        //  Display function called recursively to display LL in reverse order.
    if (head == NULL) return;

    reverse_display(head->next);

    cout<< head->val << " ";
}                                           //  O(n) space.


void reverse_display_2 (Node *tail){      //  Reverse display function using tail.....      //  Advantage of DLL.

    while (tail != NULL){
        cout<< tail->val << " ";

        tail = tail->prev;
    }

    cout<<endl;
}                                         //   O(1) space.


void reverse_display_3 (Node *n){      //  Reverse display function using any given node.....      //  Advantage of DLL.

    while (n->next != NULL){
        n = n->next;
    }                           //  now Node 'n' has become the tail node....

    reverse_display_2(n);
}


//*************************************************************************************************************************************************


int main(){

    //  Making nodes.............

    Node *a = new Node(10);         //  making nodes dynamically (in run time) through pointer........
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);


    //  Forming linked list...........

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;


    //  Using Linked list............

    cout<< a->val <<endl;
    cout<< b->prev->val <<endl;             //  accessing a->val through b.
    cout<< e->prev->prev->prev->prev->val <<endl<<endl;      //  accessing a->val through e.


    display(a);
    display_2(a);
    cout<<endl;
    display_3(c);           //  any node can be passed here.....
    cout<<endl;


    reverse_display(a);
    cout<<endl;
    reverse_display_2(e);
    reverse_display_3(c);           //  any node can be passed here.....
    cout<<endl;


    return 0;
}