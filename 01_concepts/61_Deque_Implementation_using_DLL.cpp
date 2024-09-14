


#include <iostream>
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


class Deque{
public:

    Node *head;
    Node *tail;
    int size;
    int max_size;

    Deque (int n){
        head = tail = NULL;
        size = 0;
        max_size = n;
    }

//*****************************************************

    void display (){
        Node *temp = head;

        while (temp != NULL){
            cout<< temp->val << " ";
            temp = temp->next;
        }
    }

//******************************************************

    void push_back(int val){
        if (size == max_size){
            cout<< "Deque is full!" <<endl<<endl;
            return;
        }

        Node *temp = new Node(val);

        if (size == 0){
            head = tail = temp;
        }

        else{
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }

        size++;
    }

//******************************************************

    void push_front (int val){
        if (size == max_size){
            cout<< "Deque is full!" <<endl<<endl;
            return;
        }

        Node *temp = new Node(val);

        if (size == 0){
            head = tail = temp;
        }

        else{
            temp->next = head;
            head->prev = temp;
            head = temp;
        }

        size++;
    }

//******************************************************

    void pop_front(){

        if (size == 0){
            cout<< "Deque is empty!" <<endl<<endl;
            return;
        }

        else if (size==1){
            head = tail = NULL;
        }

        else{
            head = head->next;
            head->prev = NULL;
        }

        size--;
    }

//******************************************************

    void pop_back(){

        if (size == 0){
            cout<< "Deque is empty!" <<endl<<endl;
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

//*****************************************************

    int front(){
        if (size == 0){
            cout<< "Deque is empty!" <<endl<<endl;
            return -1;
        }

        return head->val;
    }

//*****************************************************

    int back(){
        if (size == 0){
            cout<< "Deque is empty!" <<endl<<endl;
            return -1;
        }
        
        return tail->val;
    }

//*****************************************************

    bool empty(){
        return !size;
    }

};


//*****************************************************


int main(){

    Deque dq(6);

    dq.pop_back();
    dq.pop_front();

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.display();
    cout<<endl;

    dq.push_front(40);
    dq.push_front(50);
    dq.push_front(60);
    dq.display();
    cout<<endl<<endl;

    cout<< dq.front() <<endl;
    cout<< dq.back() <<endl;
    cout<< dq.size <<endl<<endl;

    dq.pop_front();
    dq.display();
    cout<<endl;
    cout<< dq.size <<endl<<endl;

    cout<< dq.empty() <<endl<<endl;

    dq.display();
    cout<<endl;

    dq.pop_back();
    dq.display();
    cout<<endl;

    dq.push_back(70);
    dq.push_front(80);
    dq.display();
    cout<<endl<<endl;

    dq.push_front(90);
    dq.push_back(90);


    return 0;
}