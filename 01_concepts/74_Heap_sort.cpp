                                                    //  Heap sort



#include <iostream>
using namespace std;


void heapify(int arr[], int n, int i){

    int largest = i;                                    // Initialize largest as root Since we are using 0 based indexing
    int l = 2*i + 1;                                    // left = 2*i + 1
    int r = 2*i + 2;                                    // right = 2*i + 2
 
    if (l < n && arr[l] > arr[largest])                     // If left child is larger than root
        largest = l;
 
    if (r < n && arr[r] > arr[largest])                       // If right child is larger than largest so far
        largest = r;
 
    if (largest != i) {                             // If largest is not root
        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);                         // Recursively heapify the affected sub-tree
    }
}
 

void heapSort(int arr[], int n){

    for (int i=n/2-1; i>=0; i--) heapify(arr, n, i);              // Building heap
 
    for (int i = n - 1; i >= 0; i--) {                  // One by one extract an element from heap
        swap(arr[0], arr[i]);                           // Move current root to end
        heapify(arr, i, 0);                             // call heapify on the reduced heap
    }
}


void printArray(int arr[], int n){
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}


int main(){
  int arr[] = { 60 ,20 ,40 ,70, 30, 10};
  int n = sizeof(arr) / sizeof(arr[0]);

  printArray(arr, n);
  
  heapSort(arr, n);

  printArray(arr, n);
     
  return 0;
}


//  Time complexity for Heap sort is O(nlogn).
//  And space complexity is O(n).

//  Heap sort is an ustable sort. i.e the numbers change their relative positions while sorting.
