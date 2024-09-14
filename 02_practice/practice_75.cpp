                                        //  print the maximum sum of a sub array of size k.

                                                //  Method 2 (by sliding window).




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

    int sum = 0;

    for (int i=0; i<k; i++) sum += arr[i];      //  finding sum of first k elements. in k ops.

    int max_sum = sum;
    int max_idx = 0;

    int i = 1, j = k;

    while (j<n){        //  no. of ops = n-k

        sum = sum + arr[j] - arr[i-1];

        if (sum > max_sum){
            max_sum = sum;
            max_idx = i;
        }

        i++;
        j++;
    }


    cout<< "The maximum sum of the sub array of size "<< k <<" is : "<< max_sum <<endl<<"which starts from index : "<< max_idx <<endl;


    return 0;
}


//  using this algorithm the time complexity reduces to O(n).