                                            //  practice_16.cpp     Method 2.
    


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

    display(v);

    int k;
    cout<<"enter the number of times you want to roll the array :- ";
    cin>>k;

    int dummy=k;    //  making it for printing in line 63. As k is changed in line 53.

    //  processing..........

    if (k>n){        //  handeling when k is greater than n.
        k %= n;
    }

                                        //  taking arr {1 6 2 3 7 4 8} and k=2.
    part_reverse(v,0,(n-1-k));          //  arr -> {7 3 2 6 1 4 8}
    part_reverse(v,(n-k),(n-1));        //  arr -> {7 3 2 6 1 8 4}
    part_reverse(v,0,(n-1));            //  arr -> {4 8 1 6 2 3 7}

    //  after these three steps the array gets rotated k times.

    cout<<"after rolling "<<dummy<<" times the array becomes :-"<<endl;

    display(v);


    return 0;
}