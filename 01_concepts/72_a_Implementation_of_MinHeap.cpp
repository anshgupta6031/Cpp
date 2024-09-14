//  Implementation of Min Heap using array.
//  Visualised using a complete binary tree in which for every node the left and right child nodes have greater value then the node's value.

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


class MinHeap{
public:

    int arr[100];
    int idx;

    MinHeap(){                          //  constructor......
        idx = 1;                        //  here, 1 based indexing is considered....
    }


//********************************************************

    int top(){
        return arr[1];
    }

//********************************************************

    int size(){
        return idx-1;
    }

//********************************************************

    void push(int x){               //  percolate up / up heapify operation.
        arr[idx] = x;

        int i = idx;
        idx++;

        while(i > 1){               //  swapping i with its parent till i==1......
            int parent = i/2;

            if(arr[i] < arr[parent]){
                swap(arr[i],arr[parent]);
                i = parent;
            }

            else break;
        }
    }

//********************************************************

    void pop(){

        idx--;
        arr[1] = arr[idx];

        int i = 1;

        while(true){
            int left_child = 2*i;
            int right_child = 2*i + 1;

            if(left_child > idx-1) break;

            if(right_child > idx-1){                //  case where (right_child > idx-1) and (left_child < idx-1)
                if(arr[i] > arr[left_child]){
                    swap(arr[i], arr[left_child]);
                    i = left_child;
                }
                break;
            }

            if(arr[left_child] < arr[right_child]){

                if(arr[i] > arr[left_child]){
                    swap(arr[i], arr[left_child]);
                    i = left_child;
                }
                else break;
            }

            else{
                if(arr[i] > arr[right_child]){
                    swap(arr[i], arr[right_child]);
                    i = right_child;
                }
                else break;
            }
        }
    }

//********************************************************

    void display(){
        for(int i=1; i<=idx-1; i++){
            cout<<arr[i] << " ";
        }
        cout<<endl;
    }

};



int main(){

    MinHeap pq;

    pq.push(10);
    pq.push(20);
    pq.push(11);
    pq.push(30);
    pq.push(40);
    pq.push(12);

    cout<< pq.top() <<endl;
    cout<< pq.size() <<endl<<endl;

    pq.push(4);
    cout<< pq.top() <<endl;
    cout<< pq.size() <<endl<<endl;

    pq.push(7);
    pq.push(2);

    cout<< pq.top() <<endl;
    cout<< pq.size() <<endl<<endl;

//********************************************************

    pq.pop();
    cout<< pq.top() <<endl;
    cout<< pq.size() <<endl<<endl;

    pq.pop();
    cout<< pq.top() <<endl;
    cout<< pq.size() <<endl<<endl;

    pq.display();


    return 0;
}


//  Similarly Max heap can also be implemented.