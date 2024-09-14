//  Cycle detection in an undirected graph using DSU (Method 1).......


/*  we will read each edge of the graph and apply union operation on the vertices contained by the edge.....
    if the parent of both the vertices is same it means that those two vertices were already connected and we want to connect them again,
    that means there is a cycle in the graph.
*/



#include <bits/stdc++.h>
using namespace std;


int find(vector<int>& parent, int x){
    if(parent[x] == x) return x;

    return parent[x] = find(parent, parent[x]);             //  path compression.........
}


bool Union(vector<int>& parent, vector<int>& rank, int a, int b){
    a = find(parent, a);
    b = find(parent, b);

    if(a == b) return true;

    if(rank[a] < rank[b]){
        parent[a] = b;
        rank[b]++;
    }

    else{
        parent[b] = a;
        rank[a]++;
    }

    return false;
}


int main(){

    int n, m;               //  n = no. of vertices, m = no. of edges

    cout<< "Enter no. of vertices : ";
    cin>>n;

    cout<< "Enter no. of edges : ";
    cin>>m;


    vector<int> parent(n+1);            //  taking 1 based indexing.....
    vector<int> rank(n+1, 0);

    for(int i=0; i<=n; i++){
        parent[i] = i;
    }

    bool b = false;             //  no cycle.........

    while(m--){
        int x, y;
        cout<<"Enter the vertices of the edge : ";
        cin>>x>>y;

        b = Union(parent, rank, x, y);

        if(b == true){
            cout<<"CYCLE DETECTED!!!"<<endl;
            break;
        }
    }

    if(b == false) cout<< "NO CYCLE DETECTED!!!"<<endl;

    return 0;
}


//  T.C = O(E.log*V) = O(E).

