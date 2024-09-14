



#include <iostream>
using namespace std;


class stack{
public:

    int arr[5];
    int idx = -1;


//*****************************************************

    void push(int val){
        if(idx == (sizeof(arr)/sizeof(arr[0]))-1){
            cout<< "Stack is full." <<endl;
            return;
        }

        idx++;
        arr[idx] = val;
    }

    void pop(){
        if(idx == -1){
            cout<< "Stack is empty." <<endl;
            return;
        }

        idx--;
    }

    int top(){
        if(idx == -1){
            cout<< "Stack is empty." <<endl;
            return -1;
        }

        return arr[idx];
    }

    int size(){
        return idx+1;
    }

    void display(){
        for(int i=0; i<=idx; i++){
            cout<< arr[i] <<" ";
        }
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

    st.push(60);
    st.display();
    cout<< st.size() <<endl<<endl;

    st.pop();
    cout<< st.size() <<endl<<endl;
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