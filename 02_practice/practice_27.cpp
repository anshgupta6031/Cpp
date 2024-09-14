                                                        //  Leetcode 31...........
                                                        //  (next permutation)



#include <bits/stdc++.h>
using namespace std;

void display(vector <int> &v){
    int n = v.size();
    for (int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void part_reverse(vector <int> &v, int a, int b){
    while (a<b){
        int temp = v[a];
        v[a] = v[b];
        v[b] = temp;
        
        a++;
        b--;
    }
}

void swap (vector <int> &v, int index1, int index2){
    int temp = v[index1];
    v[index1]=v[index2];
    v[index2]=temp;
}


void nextPermutation (vector <int> &nums){
    int n = nums.size();
    int pivot_index = -1;       //  pivot is the first index at which : arr[pivot]<arr[pivot+1]
    
    for (int i=n-2; i>=0; i--){     //  loop for finding pivot.
        if (nums[i]<nums[i+1]){
            pivot_index=i;
            break;
        }
    }

    if (pivot_index==-1){       //  in case there is no pivot.
        part_reverse(nums, 0, n-1);
    }

    else {

        part_reverse(nums, (pivot_index+1), (n-1));     //  by this the array ahead of the pivot index gets sorted as it is already in decending form.

        int just_big;       //  it is the index of the number just bigger than the number at pivot index.

        for (int i=pivot_index+1; i<n; i++){
            if (nums[i]>nums[pivot_index]){
                just_big=i;
                break;
            }
        }

        swap(nums, pivot_index, just_big);
    }
}


int main(){

    vector <int> v;
    int n;

    cout<<"enter the number of elements : ";
    cin>>n;

    cout<<"enter the elements of the vector :- ";
    for(int i=0; i<n; i++){
        int p;
        cin>>p;
        v.push_back(p);
    }

    display(v);

    nextPermutation(v);
    
    display(v);

    return 0;
}