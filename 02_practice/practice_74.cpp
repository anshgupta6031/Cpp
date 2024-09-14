                                        //  print the maximum sum of a sub array of size k.

                                                //  Method 1 (brute force).




#include <bits/stdc++.h>
using namespace std;

int main(){

    vector <int> arr;
    int n, k;

    cout<<"enter the number of elements in the vector : ";
    cin>>n;

    cout<<"enter the elements of the vector :- ";
    for(int i=0; i<n; i++){
        int p;
        cin>>p;
        arr.push_back(p);
    }

    cout<<"Enter the value of k : ";
    cin>>k;

    //  processing.............

    int max_sum = INT_MIN;
    int max_idx = -1;

    for (int i=0; i<=n-k; i++){     //  no. of ops = n-k+1

        int sum = 0;

        for (int j=i; j<i+k; j++){      //  k times.
            sum += arr[j];
        }

        if (max_sum < sum){
            max_sum = sum;
            max_idx = i;
        }
    }

    cout<< "The maximum sum of the sub array of size "<< k <<" is : "<< max_sum <<endl<<"which starts from index : "<< max_idx <<endl;


    return 0;
}



//  total no of ops = (n-k+1) * k
//  therefore, time complexity = O(k*n).