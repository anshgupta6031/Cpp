



#include <iostream>
using namespace std;


class Node{             //  user defined datatype.
public:

    int val;
    Node *next;

    Node (int val){
        this -> val = val;
        this -> next = NULL;
    }

};


class stack{
public:

    Node *head;
    int size;

    stack (){             //  constructor.......
        head = NULL;
        size = 0;
    }


//*****************************************************

    void push(int val){             //  No overflow situation due to unlimited size.
        Node* temp = new Node(val);

        temp->next = head;
        head = temp;
        size++;
    }

//*****************************************************

    void pop(){
        if(size == 0){
            cout<< "Stack is empty." <<endl;
            return;
        }

        head = head->next;
        size--;
    }

//*****************************************************

    int top(){
        if(size == 0){
            cout<< "Stack is empty." <<endl;
            return -1;
        }

        return head->val;
    }

//*****************************************************

    void print(Node* head){
        if (head == NULL) return;

        int x = head->val;
        print(head->next);
        cout<< x <<" ";
    }


    void display(){
        Node* temp = head;
        print(temp);
        cout<<endl<<endl;
    }

};


int main(){

    stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.display();
    cout<< st.size <<endl<<endl;

    st.pop();
    cout<< st.size <<endl;
    st.display();
    cout<< st.top() <<endl<<endl;

    st.pop();
    st.pop();
    st.display();

    st.pop();
    cout<< st.top() <<endl<<endl;

    st.pop();
    cout<< st.top() <<endl<<endl;


    return 0;
}