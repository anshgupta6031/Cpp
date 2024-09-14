                                                    //  Quick sort............




#include <bits/stdc++.h>
using namespace std;


void display(vector <int> &v){
    int n = v.size();
    for (int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int partition (vector <int> &v, int start, int end){

    //  step 1...............

    int pivot_element = v[start];       //  here if we do ( int pivot_element = v[(start + end)/2]; ), then the time complexity for worst case can pe improved and will be O(n.log n) for all cases.
    int count = 0;

    for (int i=start+1; i<=end; i++){       //  loop to count the no. of elements lesser then the pivot element, in order to find the pivot index.
//  for (int i=start; i<=end; i++){         //  only replaced if we use randomized pivot point.
//      if (i==(start+end)/2) continue;     //  only added if we use randomized pivot point.
        if (v[i] <= pivot_element) count++;
    }

    int pivot_idx = count + start;      //  found the pivot index.

    swap (v[start], v[pivot_idx]);      //  now the pivot element is in its correct position.
//  swap (v[start+end)/2], v[pivot_idx]);           //  only replaced if we use randomized pivot point.

    //  step 2................

    int i = start, j = end;

    while (i<pivot_idx && j>pivot_idx){     //  loop to arrange the no.s lesser than the pivot element to the left of pivot index and those which are greater to the right of it.

        if (v[i]<=pivot_element) i++;

        else if (v[j]>pivot_element) j--;

        else if (v[i]>pivot_element && v[j]<=pivot_element){
            swap (v[i],v[j]);
            i++;
            j--;
        }

    }

    return pivot_idx;   //  finally returning the pivot index.

}


void quick_sort (vector <int> &v, int start, int end){

    if (start>=end) return;     //  base case.............

    int pivot_idx = partition (v, start, end);

    quick_sort (v, start, pivot_idx-1);
    quick_sort (v, pivot_idx+1, end);
    
}


int main(){

    vector <int> arr;
    int n;

    cout<<"enter the number of elements in the vector : ";
    cin>>n;

    cout<<"enter the elements of the vector :- ";
    for(int i=0; i<n; i++){
        int p;
        cin>>p;
        arr.push_back(p);
    }

    display(arr);

    quick_sort (arr, 0, n-1);

    display(arr);

    return 0;

}



//  Time complexity for quick sort is O(n.log n) in average cases.
//  Time complexity for quick sort in worst case is O(n**2), which can be improved to O(n.log n) by using randomized pivot point. (reffer line 23......)
//  And space complexity is O(log n) due to the variables (start, end, pivot_idx) taking space in the call stack.

//  Quick sort is an unstable sort. i.e the numbers change their relative positions while sorting.

/*  USE CASES :-
    1) Internal (inbuilt) sorting uses variation of quick sort.
    2) Used wherever there is no need of stability.
    3) Used to solve quick select type of problems.
*/