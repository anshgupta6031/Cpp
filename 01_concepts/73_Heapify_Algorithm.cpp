//  Heapify algorithm converts the given array to a heap array by rearranging the elements.
//  Visualised a complete binary tree in which for every node the left and right child nodes have greater value then the node's value.
//  Here, we will Heapify the array into a min heap array. A similar algo can be used to convert it to a max heap array.

/*
    Important points :-

    1)  no. of leaf node in a complete binary tree = (n/2) if n is even.    
                                                   = (n/2 + 1) if n is odd.
                                                   where, n is the size of the tree.
*/



#include <bits/stdc++.h>
using namespace std;


void display(int arr[], int n){
    for(int i=1; i<n; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}


void heapify(int i, int arr[], int n){

    while(true){                                //  same code of pop() function in (72_Implimentation_of_MinHeap).
        int left_child = 2*i;
        int right_child = 2*i + 1;

        if(left_child >= n) break;

        if(right_child >= n){                //  case where (right_child >= n) and (left_child < n)
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


int main(){

    int arr[] = {-1,10,2,14,11,1,4};        //  taking index 0 as farzi index and put -1 at it. To be able to use 1 based indexing.........

    int n = sizeof(arr)/sizeof(arr[0]);

    display(arr,n);             //  display before heapifying......


//  processing........

    for(int i=n/2; i>=1; i--){          //  down heapify from end leaving the leaf elements.
       heapify(i, arr, n);
    }                                   //  T.C = O(n).
                                        //  An alternate solution can be obtained by up heapifying all the elements from starting. T.C = O(n logn).

    display(arr,n);             //  display after heapifying......

    return 0;
}


/*
NOTE :- 
1)  Every sorted array is a min heap.
2)  Every reverse sorted array is a max heap.
3)  vise-versa in both the cases is not true.
*/