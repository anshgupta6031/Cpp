//  Disjoint set union(DSU) / Union Find........

//  Union by rank (using rank array).......




#include <bits/stdc++.h>
using namespace std;


int find(vector<int>& parent, int x){
    if(parent[x] == x) return x;

    return parent[x] = find(parent, parent[x]);             //  path compression.........
}


void Union(vector<int>& parent, vector<int>& rank, int a, int b){
    a = find(parent, a);
    b = find(parent, b);

    if(a == b) return;

    if(rank[a] < rank[b]){
        parent[a] = b;
        rank[b]++;
    }

    else{
        parent[b] = a;
        rank[a]++;
    }
}


int main(){

    int n, m;               //  n = no. of elements, m = no. of queries

    cout<< "Enter no. of elements : ";
    cin>>n;

    cout<< "Enter no. of queries : ";
    cin>>m;


    vector<int> parent(n+1);            //  taking 1 based indexing.....
    vector<int> rank(n+1, 0);

    for(int i=0; i<=n; i++){
        parent[i] = i;
    }


    while(m--){
        string str;
        cout<<"Enter the operation : ";
        cin>>str;

        if(str == "union"){
            int x, y;
            cout<<"Enter any 2 elements : ";
            cin>>x>>y;

            Union(parent, rank, x, y);
        }

        else if(str == "find"){
            int x;
            cout<<"Enter the element : ";
            cin>>x;

            cout<< find(parent, x) <<endl;
        }

        else{
            cout<< "INVALID STRING..."<<endl;
        }
    }


    return 0;
}


//  T.C for find and union both = O(log*n), which is nearly a constant time.....
//  log*n is the no. of (log n with base 2) operations required to make n less than 1.

