



#include <iostream>
#include <vector>
using namespace std;


class Queue{
public:

    int f;
    int b;
    int s;
    vector<int> arr;

    Queue(int n){
        f = 0;
        b = 0;
        s = 0;
        vector<int> v(n);
        arr = v;
    }


//*****************************************************

    void push(int val){

        if(b==arr.size()){
            cout<<"Queue is full !"<<endl;
            return;
        }

        arr[b] = val;
        b++;
        s++;
    }

    void pop(){
        if(s==0){
            cout<<"Queue Underflow !,  Queue is empty !"<<endl;
            return;
        }

        f++;
        s--;
    }

    int front(){
        if(s==0){
            cout<<"Queue is empty !"<<endl;
            return -1;
        }

        return arr[f];
    }

    int back(){
        if(s==0){
            cout<<"Queue is empty !"<<endl;
            return -1;
        }

        return arr[b-1];                //  carefull!!! because while pushing we maintain b one position ahead to push for next time.
    }

    int size(){
        return s;
    }

    void display(){
        for(int i=f; i<b; i++){
            cout<< arr[i] <<" ";
        }
    }

    bool empty(){
        return !s;
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
    cout<< q.size() <<endl<<endl;

    q.pop();

    cout<< q.front() <<endl;
    cout<< q.back() <<endl;
    cout<< q.size() <<endl<<endl;

    cout<< q.empty() <<endl<<endl;

    q.display();
    cout<<endl;

    q.pop();
    q.display();
    cout<<endl<<endl;

    q.push(70);

    return 0;
}


//  array implementation is not that efficient as there is wastage of memory and once the queue is full, no more element can be pushed even after popping them.