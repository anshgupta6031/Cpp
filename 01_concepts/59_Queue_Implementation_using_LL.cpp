



#include <iostream>
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


class Queue{
public:

    Node *head;
    Node *tail;
    int size;
    int max_size;

    Queue(int n){
        head = tail = NULL;
        size = 0;
        max_size = n;
    }


//*****************************************************

    void push(int val){
        if(size == max_size){
            cout<< "Queue is full !" <<endl;
            return;
        }

        Node* temp = new Node(val);

        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }

        size++;
    }

//*****************************************************

    void pop(){
        if(size == 0){
            cout<< "Queue is empty!" <<endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        size--;
        delete(temp);           //  deleting the popped node to avoid memory wastage.
    }

//*****************************************************

    int front(){
        if(size == 0){
            cout<< "Queue is empty!" <<endl;
            return -1;
        }

        return head->val;
    }

//*****************************************************

    int back(){
        if(size == 0){
            cout<< "Queue is empty!" <<endl;
            return -1;
        }

        return tail->val;
    }

//*****************************************************

    void display(){
        Node* temp = head;
        
        while (temp != NULL){
            cout<< temp->val <<" ";
            temp = temp->next;
        }
    }

//*****************************************************

    bool empty(){
        return !size;
    }

};


int main(){

    Queue q(6);

    q.pop();
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    cout<< q.front() <<endl;
    cout<< q.back() <<endl;
    cout<< q.size <<endl<<endl;

    q.pop();

    cout<< q.front() <<endl;
    cout<< q.back() <<endl;
    cout<< q.size <<endl<<endl;

    cout<< q.empty() <<endl<<endl;

    q.display();
    cout<<endl;

    q.pop();
    q.display();
    cout<<endl;

    q.push(70);
    q.push(80);
    q.display();
    cout<<endl<<endl;

    q.push(90);


    return 0;
}