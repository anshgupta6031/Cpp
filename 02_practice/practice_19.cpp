                                        //  program to sort an array of 0s and 1s.
                                                    //  Method 1.
                                                //  two pass method.



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

    //  in this method we pass through the array 2 times thats why it is called two pass method.

    int n0 = 0, n1 = 0;     //  n0 is the no. of zeroes and n1 is no. of 1s.

    for (int i=0; i<n; i++){        //  while traversing through the array for first time we are counting the no. of 0s and 1s.
        if (v[i]==0){
            n0++;
        }
        else{
            n1++;
        }
    }

    for (int j=0; j<n; j++){        //  while traversing through the array for second time we are overwriting the array with known no. of 0s and 1s.
        if (j<n0){
            v[j]=0;
        }

        else{
            v[j]=1;
        }
    }
    
    display(v);


    return 0;
}


//  in sorting questions, always prefer to use if, else if, else ladder instead of using multiple if in parallel in order to get rid of unnecessary problems.