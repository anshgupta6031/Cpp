/*  QUESTION :-
Given an array with n distinct elements, convert the given array to a form where all elements are in the range from 0 to n-1.
The order of elements is the same, i.e. 0 is placed in the place of the smallest element, 
1 is placed for the second smallest element and so on.
*/



#include <iostream>
using namespace std;
#include <vector>
#include <climits>


int main(){
    vector <int> v;
    int n;

    cout<<"Enter the size of the array : ";
    cin>>n;

    cout<<"Enter the elements of the array."<<endl;

    for (int i=0; i<n; i++){
        int p;
        cin>>p;
        v.push_back(p);
    }


    for (int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //  processing...............

    vector <int> isVisited(n,0);

    for (int i=0; i<n; i++){
        int min = INT_MAX;
        int min_index;
        for (int j=0; j<n; j++){
            if (v[j]<min && isVisited[j]==0){
                min = v[j];
                min_index = j;
            }
        }
        
        v[min_index] = i;
        isVisited[min_index] = 1;
    }


    //  display..........


    for (int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    return 0;
}