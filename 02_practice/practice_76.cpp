                    //  print the array having first negative number of every window of size 'k' in the given array.




#include <bits/stdc++.h>
using namespace std;

void display(vector <int> &v){
    int n = v.size();
    for (int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


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

    vector <int> ans(n-k+1);

    int p = -1;
    for (int i=0; i<k; i++){
        if (arr[i] < 0){
            p = i;
            break;
        }
    }

    if (p==-1) ans[0] = 1;
    else ans[0] = arr[p];

    int i = 1, j = k;

    while (j<n){

        if (p >= i) ans[i] = arr[p];

        else {

            p = -1;
            for (int x=i; x<=j; x++){
                if (arr[x] < 0){
                    p = x;
                    break;
                }
            }
            
            if (p==-1) ans[i] = 1;
            else ans[i] = arr[p];
        }

        i++;
        j++;
    }

    cout<<endl<<endl;

    display(arr);

    cout<< "The array of the first negative elements in each window is :-"<<endl;

    display(ans);


    return 0;
}