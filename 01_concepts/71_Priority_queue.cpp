


#include <iostream>
#include <queue>        //  we have to include queue library to use priority queues(Heaps).
using namespace std;


int main(){

    priority_queue <int> pq;     //  In C++, max heap is created by default.

    pq.push(10);        //  pushing an element into the priority queue.........
    pq.push(20);        //  The insertion is done in random order such that the greatest element always stays on top in a max heap.
    pq.push(70);
    pq.push(40);
    pq.push(50);

    cout<< pq.top() <<endl;        //  finding the top of the priority queue. (greatest element always stays on top).

    pq.pop();

    cout<< pq.top() <<endl<<endl;

//**************************************************************************************************************************************************************


    priority_queue <int, vector<int>, greater<int>> min_heap;       //  This is how we define a min heap.
                                                                    //  Min heap is similar to the max heap but the minimum element always stays on top.
    
    min_heap.push(20);        //  The insertion is done in random order such that the smallest element always stays on top in a min heap.
    min_heap.push(70);
    min_heap.push(10);
    min_heap.push(40);
    min_heap.push(50);

    cout<< min_heap.top() <<endl;        //  finding the top of the min heap. (smallest element always stays on top).

    min_heap.pop();

    cout<< min_heap.top() <<endl<<endl;


    return 0;
}


/*
    priority queue(Heap) is similar to stacks but it is a non linear data structure and the greatest/smallest element always stays on the top.

    T.C for top() is O(1).
    T.C for push() is O(log n).
    T.C for pop() is O(log n).
*/

/*
    Use Cases :-

    1)  Kth smallest, Largest OR top k frequent elements OR closest k elements are asked.   (alternate way is to use quick select)
    2)  At any point of time, minimum/maximum elements are required.
    3)  Used in sorting(sometimes).     (heap sort).
*/

