////////////////////////////////////////////////    IMPORTANT FOR INTERVIEWS    \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

                                            //  sort array of 0s, 1s, and 2s.
                                                    //  Method 2.
                                    //  By Dutch flag algorithm  or  three pointer method.



#include <bits/stdc++.h>
using namespace std;

void display(vector <int> &v){
    int n = v.size();
    for (int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void swap (vector <int> &v, int index1, int index2){
    int temp = v[index1];
    v[index1]=v[index2];
    v[index2]=temp;
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

    //  processing...............

    int low = 0, mid = 0, high = n-1;

    while (mid<=high){
        
        if (v[mid]==2){         //  maintaning 2 after high.
            swap(v,mid,high);
            high--;
        }

        else if (v[mid]==0){         //  maintaning 0 before low.
            swap(v,mid,low);
            mid++;                   //  mid can not be behind low.
            low++;
        }
        
        else if (v[mid]==1){
            mid++;
        }
    }
    
    display(v);

    return 0;
}