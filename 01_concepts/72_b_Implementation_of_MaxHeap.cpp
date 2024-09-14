//  Implementation of Max Heap using array.
//  Visualised using a complete binary tree in which for every node the left and right child nodes have lesser value then the node's value.

/*
    Important points :-

    1)  The array indexing starts with 1.
    2)  For any index i, the parent node will be floor value of i/2.
    3)  For any index i, the left and right child nodes will be 2*i and 2*i+1 respectively.

    4)  The array indexing starts with 0.
    5)  For any index i, the parent node will be floor value of (i-1)/2.
    6)  For any index i, the left and right child nodes will be 2*i+1 and 2*i+2 respectively.
*/



#include <bits/stdc++.h>
using namespace std;


class MaxHeap{
public:

    vector<int> arr;                        //  here, 0 based indexing is considered.....

    MaxHeap(){}                          //  constructor......


//********************************************************

    int top(){
        if(empty()) return INT_MIN;
        return arr[0];
    }

//********************************************************

    int size(){
        return arr.size();
    }

//********************************************************

    void display(){
        for(int i=0; i<arr.size(); i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

//********************************************************

    bool empty(){
        return (arr.size() == 0);
    }

//********************************************************

    void push(int x){               //  percolate up / up heapify operation.
        arr.push_back(x);

        int i = arr.size()-1;

        while(i > 0){               //  swapping i with its parent till i==1......
            int parent = (i-1)/2;

            if(arr[i] > arr[parent]){
                swap(arr[i],arr[parent]);
                i = parent;
            }

            else break;
        }
    }

//********************************************************

    void pop(){               //  percolate down / down heapify operation.

        if(empty()) return;

        arr[0] = arr[arr.size()-1];
        arr.pop_back();

        int i = 0;

        while(true){
            int left_child = 2*i + 1;
            int right_child = 2*i + 2;

            if(left_child >= arr.size()) break;

            if(right_child >= arr.size()){                //  case where (right_child >= arr.size()) and (left_child < arr.size())
                if(arr[i] < arr[left_child]){
                    swap(arr[i], arr[left_child]);
                    i = left_child;
                }
                else break;
            }


            if(arr[left_child] > arr[right_child]){

                if(arr[i] < arr[left_child]){
                    swap(arr[i], arr[left_child]);
                    i = left_child;
                }
                else break;
            }

            else{
                if(arr[i] < arr[right_child]){
                    swap(arr[i], arr[right_child]);
                    i = right_child;
                }
                else break;
            }
        }
    }

};



int main(){

    MaxHeap pq;

    cout<<pq.empty() <<endl;
    cout<< pq.top() <<endl<<endl;

    pq.push(10);
    pq.push(20);
    pq.push(11);
    pq.push(30);
    pq.push(40);
    pq.push(12);

    cout<< pq.top() <<endl;
    cout<< pq.size() <<endl<<endl;

    pq.push(50);
    cout<< pq.top() <<endl;
    cout<< pq.size() <<endl<<endl;

    pq.push(7);
    pq.push(200);

    cout<< pq.top() <<endl;
    cout<< pq.size() <<endl<<endl<<endl;

//********************************************************
    pq.display();
    cout<<endl;
    pq.pop();
    cout<< pq.top() <<endl;
    cout<< pq.size() <<endl<<endl;

    pq.pop();
    cout<< pq.top() <<endl;
    cout<< pq.size() <<endl<<endl;

    pq.display();
    cout<<pq.empty() <<endl<<endl;


    return 0;
}


/*
Q) How can we remove an element at a given index?

sol) steps :-
    1)  if max heap, make the index element INT_MAX. if min heap, make the index element INT_MIN.
    2)  up heapify so that the INT_MAX/INT_MIN goes to the root.
    3)  now use the algorithm of removing the root/top element to remove INT_MAX/INT_MIN.

    T.C = O(log n).
*/