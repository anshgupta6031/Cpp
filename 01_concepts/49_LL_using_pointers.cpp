//  using pointer makes the implementation of LL much easier.



#include <bits/stdc++.h>
using namespace std;


class Node{
public:

    int val;
    Node *next;

    Node (int val){
        this -> val = val;
        this -> next = NULL;
    }

};


void display (Node *head){

    while (head != NULL){               //  accessing all values through a using loop.
        cout<< head->val << " ";

        head = head->next;
    }

    cout<<endl<<endl;
}


int size (Node *head){
    int n = 0;

    while (head != NULL){
        n++;
        head = head->next;
    }

    return n;
}


void display_2 (Node *head){        //  another display function called recursively.

    if (head == NULL) return;

    cout<< head->val << " ";

    display_2(head->next);
}


void reverse_display (Node *head){        //  another display function called recursively to display LL in reverse order.
    if (head == NULL) return;

    reverse_display(head->next);

    cout<< head->val << " ";
}


void Insert_At_End (Node *head, int val){               //  T.C = O(n)

    Node *n = new Node(val);

    while (head->next != NULL){
        head = head->next;
    }

    head->next = n;
}


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


    //  Using Linked list............

    cout<< (*a).val <<endl;         //  accessing value of a.
    cout<< a->val <<endl<<endl;       //  it is same as the previous line.

    cout<< (*((*a).next)).val <<endl;         //  accessing b->val through a.
    cout<< a->next->val <<endl<<endl;          //  it is same as the previous line.

    cout<< a->next->next->val <<endl;         //  accessing c->val through a.
    cout<< a->next->next->next->val <<endl<<endl;      //  accessing d->val through a.


//********************************************************************************************************************************************************


    display(a);     //  calling function to display all the values of the LL, by just passing the head of the LL.

    cout<< size(a) <<endl<<endl;     //  calling function to print the size of the LL, by just passing the head of the LL.

    display_2(a);
    cout<<endl<<endl;

    reverse_display(a);
    cout<<endl<<endl;


    Insert_At_End(a,60);


    display(a);
    

    return 0;
}