                                        //  program to sort an array of 0s and 1s.
                                                    //  Method 2.
                                                //  two pointer method.
                                               //  very important method.



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
    //  in this method two pointers are initialized at the starting and another at the end of the array.
    //  there are only 3 possibilities of the numbers at the corresponging pointers.


    int begining = 0;
    int end = n-1;

    while (begining < end){
        if (v[begining] == 0){      //  if they are in this order, only the pointer in the front is required to move towards other by 1 step.
            begining++;
        }

        if (v[end] == 1){      //  if they are in this order, only the pointer in the back is required to move towards other by 1 step.
            end--;
        }

        if (begining >= end){   //  using this for exceptional input : 1 1 0 1 0 1 1 0
            break;              //  we can also remove this part if we use the next if statement first and then use the the above 2 if statements.
        }                       //  another way of removing it is by using if, else if, else ladder instead of these parallel if's.

        if ((v[begining] == 1) && (v[end] == 0)){      //  if they are in this order, the numbers are required to be swapped and both the pointer are required to move towards each other by 1 step.
            int temp = v[begining];
            v[begining] = v[end];
            v[end] = temp;

            begining++;
            end--;
        }
    }
    
    display(v);

    return 0;
}