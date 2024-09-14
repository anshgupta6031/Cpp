                                            //  make a function to reverse part of a vector.



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


    int a,b;
    cout<<"enter the indices within which array is to be reversed : ";
    cin>>a;         //  when taking input in same line the display function is not working, dont know why.........
    cin>>b;

    display(v);
    part_reverse(v,a,b);
    display(v);


    return 0;
}