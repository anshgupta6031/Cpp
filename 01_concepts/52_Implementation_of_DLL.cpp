//  Making a user defined data structure (Doubly Linked list).



#include <bits/stdc++.h>
using namespace std;


class Node{
public:

    int val;
    Node *next;
    Node *prev;

    Node (int val){
        this -> val = val;
        this -> next = NULL;
        this -> prev = NULL;
    }

};


//*****************************************************


class Doubly_Linked_List{             //  user defined data structure.
public:

    Node *head;
    Node *tail;
    int size;

    Doubly_Linked_List (){             //  constructor.......
        head = tail = NULL;
        size = 0;
    }

//*****************************************************

    void display (){
        Node *temp = head;

        while (temp != NULL){
            cout<< temp->val << " ";

            temp = temp->next;
        }

        cout<<endl<<endl;
    }

//******************************************************

    void Insert_At_End (int val){

        Node *temp = new Node(val);

        if (size == 0){
            head = tail = temp;
        }

        else{
            tail->next = temp;
            temp->prev = tail;      //  extra...
            tail = temp;
        }

        size++;
    }

//******************************************************

    void Insert_At_Front (int val){               //  T.C = O(1).

        Node *temp = new Node(val);

        if (size == 0){
            head = tail = temp;
        }

        else{
            temp->next = head;
            head->prev = temp;      //  extra...
            head = temp;
        }

        size++;
    }

//******************************************************

    void Insert_At_Index (int idx, int val){

        if (idx == 0) Insert_At_Front(val);

        else if (idx == size) Insert_At_End(val);

        else if (idx<0 || idx>size) cout<<"Invalid Index........"<<endl<<endl;

        else{
            Node *t = new Node(val);    //  node to be inserted.....
            Node *temp = head;          //  node for traversal.....

            for (int i=1; i<=idx-1; i++){
                temp = temp->next;
            }

            t->next = temp->next;
            temp->next = t;
            t->prev = temp;      //  extra...
            t->next->prev = t;      //  extra...

            size++;
        }
    }

//******************************************************

    int Get_At_Index (int idx){         //  optimised......

        if (idx<0 || idx>=size){
            cout<<"Invalid Index........ ";
            return -1;                          //  have to return something as return type is int.
        }

        else if (idx==0) return head->val;

        else if (idx==size-1) return tail->val;

        else{

            if (idx < size/2){
                Node *temp = head;

                for (int i=1; i<=idx; i++){
                    temp = temp->next;
                }

                return temp->val;
            }

            else{
                Node *temp = tail;

                for (int i=1; i <= size-idx-1; i++){
                    temp = temp->prev;
                }

                return temp->val;
            }
        }
    }

//******************************************************

    void Delete_At_Front (){

        if (size == 0){
            cout<< "List is empty !" <<endl<<endl;
            return;
        }

        else if (size==1){
            head = tail = NULL;
        }

        else{
            head = head->next;
            head->prev = NULL;      //  extra...
        }

        size--;
    }

//******************************************************

    void Delete_At_End (){                  //  T.C = O(1).

        if (size == 0){
            cout<< "List is empty !" <<endl<<endl;
            return;
        }

        else if (size==1){
            head = tail = NULL;
        }

        else{
            tail = tail->prev;
            tail->next = NULL;
        }

        size--;
    }

//******************************************************

    void Delete_At_Index (int idx){

        if (idx<0 || idx>=size){
            cout<<"Invalid Index........ " <<endl<<endl;
            return;
        }

        else if (idx==0) Delete_At_Front();

        else if (idx==size-1) Delete_At_End();

        else{
            Node *temp = head;

            for (int i=1; i<=idx-1; i++){
                temp = temp->next;
            }

            temp->next = temp->next->next;
            temp->next->prev = temp;               //  extra...

            size--;
        }
    }

//******************************************************

};


//*****************************************************


int main(){

    Doubly_Linked_List ll;

    ll.Insert_At_End(10);
    ll.display();

    ll.Insert_At_End(20);
    ll.Insert_At_End(30);
    ll.display();
    cout<< ll.size <<endl<<endl;

    ll.Insert_At_Front(100);
    ll.display();
    cout<< ll.size <<endl<<endl;

    ll.Insert_At_Index(2,400);
    ll.display();

    cout<< ll.Get_At_Index(3) <<endl<<endl;

    ll.Delete_At_Front();
    ll.display();

    ll.Delete_At_End();
    ll.display();

    ll.Delete_At_Index(1);
    ll.display();
    cout<< ll.size <<endl<<endl;


    return 0;
}